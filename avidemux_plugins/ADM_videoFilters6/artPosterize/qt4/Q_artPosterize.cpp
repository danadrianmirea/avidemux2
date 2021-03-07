/***************************************************************************
                          DIA_crop.cpp  -  description
                             -------------------

			    GUI for cropping including autocrop
			    +Revisted the Gtk2 way
			     +Autocrop now in RGB space (more accurate)

    begin                : Fri May 3 2002
    copyright            : (C) 2002/2007 by mean
    email                : fixounet@free.fr
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "Q_artPosterize.h"
#include "ADM_toolkitQt.h"
#include "ADM_vidArtPosterize.h"

//
//	Video is in YV12 Colorspace
//
//
Ui_artPosterizeWindow::Ui_artPosterizeWindow(QWidget *parent, artPosterize *param,ADM_coreVideoFilter *in) : QDialog(parent)
{
    uint32_t width,height;
        ui.setupUi(this);
        lock=0;
        // Allocate space for green-ised video
        width=in->getInfo()->width;
        height=in->getInfo()->height;

        canvas=new ADM_QCanvas(ui.graphicsView,width,height);
        
        myFly=new flyArtPosterize( this,width, height,in,canvas,ui.horizontalSlider);
        ADMVideoArtPosterize::ArtPosterizeCreateBuffers(width,height, &(myFly->rgbBufStride), &(myFly->rgbBufRaw), &(myFly->rgbBufImage), &(myFly->convertYuvToRgb), &(myFly->convertRgbToYuv));
        memcpy(&(myFly->param),param,sizeof(artPosterize));
        myFly->_cookie=&ui;
        myFly->addControl(ui.toolboxLayout);
        myFly->upload();
        myFly->sliderChanged();

        connect( ui.horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(sliderUpdate(int)));
#define SPINNER(x,y,z) ui.horizontalSlider##x->setScale(1,y,z); \
        connect( ui.horizontalSlider##x,SIGNAL(valueChanged(int)),this,SLOT(valueChanged(int)));
        SPINNER(Levels,1,0)

        setModal(true);
}
void Ui_artPosterizeWindow::sliderUpdate(int foo)
{
    myFly->sliderChanged();
}
void Ui_artPosterizeWindow::gather(artPosterize *param)
{
    myFly->download();
    memcpy(param,&(myFly->param),sizeof(artPosterize));
}
Ui_artPosterizeWindow::~Ui_artPosterizeWindow()
{
    if(myFly) {
        ADMVideoArtPosterize::ArtPosterizeDestroyBuffers(myFly->rgbBufRaw, myFly->rgbBufImage, myFly->convertYuvToRgb, myFly->convertRgbToYuv);
        delete myFly;
    }
    myFly=NULL; 
    if(canvas) delete canvas;
    canvas=NULL;
}
void Ui_artPosterizeWindow::valueChanged( int f )
{
    if(lock) return;
    lock++;
    myFly->download();
    myFly->sameImage();
    lock--;
}

void Ui_artPosterizeWindow::resizeEvent(QResizeEvent *event)
{
    if(!canvas->height())
        return;
    uint32_t graphicsViewWidth = canvas->parentWidget()->width();
    uint32_t graphicsViewHeight = canvas->parentWidget()->height();
    myFly->fitCanvasIntoView(graphicsViewWidth,graphicsViewHeight);
    myFly->adjustCanvasPosition();
}

void Ui_artPosterizeWindow::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);
    myFly->adjustCanvasPosition();
    canvas->parentWidget()->setMinimumSize(30,30); // allow resizing after the dialog has settled
}

#define MYCOMBOX(x) w->comboBox##x
#define MYSPIN(x) w->horizontalSlider##x
#define MYCHECK(x) w->checkBox##x
//************************
uint8_t flyArtPosterize::upload(void)
{
    Ui_artPosterizeDialog *w=(Ui_artPosterizeDialog *)_cookie;
    MYSPIN(Levels)->setValue((int)param.levels);
    return 1;
}
uint8_t flyArtPosterize::download(void)
{
    Ui_artPosterizeDialog *w=(Ui_artPosterizeDialog *)_cookie;
    param.levels=(int)MYSPIN(Levels)->value();
    return 1;
}

/**
      \fn     DIA_getCropParams
      \brief  Handle crop dialog
*/
uint8_t DIA_getArtPosterize(artPosterize *param,ADM_coreVideoFilter *in)
{
    uint8_t ret=0;
    Ui_artPosterizeWindow dialog(qtLastRegisteredDialog(), param,in);

    qtRegisterDialog(&dialog);

    if(dialog.exec()==QDialog::Accepted)
    {
        dialog.gather(param); 
        ret=1;
    }

    qtUnregisterDialog(&dialog);

    return ret;
}
//____________________________________
// EOF


