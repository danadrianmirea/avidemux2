// automatically generated by admSerialization.py, do not edit!
extern const ADM_paramList my_prefs_struct_param[]={
 {"version.apiVersion",offsetof(my_prefs_struct,version.apiVersion),"uint32_t",ADM_param_uint32_t},
 {"features.swap_if_A_greater_than_B",offsetof(my_prefs_struct,features.swap_if_A_greater_than_B),"bool",ADM_param_bool},
 {"features.saveprefsonexit",offsetof(my_prefs_struct,features.saveprefsonexit),"bool",ADM_param_bool},
 {"features.ignoresavedmarkers",offsetof(my_prefs_struct,features.ignoresavedmarkers),"bool",ADM_param_bool},
 {"features.reuse_2pass_log",offsetof(my_prefs_struct,features.reuse_2pass_log),"bool",ADM_param_bool},
 {"features.audiobar_uses_master",offsetof(my_prefs_struct,features.audiobar_uses_master),"bool",ADM_param_bool},
 {"features.threading_lavc",offsetof(my_prefs_struct,features.threading_lavc),"uint32_t",ADM_param_uint32_t},
 {"features.cpu_caps",offsetof(my_prefs_struct,features.cpu_caps),"uint32_t",ADM_param_uint32_t},
 {"features.cache_size",offsetof(my_prefs_struct,features.cache_size),"uint32_t",ADM_param_uint32_t},
 {"features.shared_cache",offsetof(my_prefs_struct,features.shared_cache),"bool",ADM_param_bool},
 {"features.mpeg_no_limit",offsetof(my_prefs_struct,features.mpeg_no_limit),"bool",ADM_param_bool},
 {"features.dxva2",offsetof(my_prefs_struct,features.dxva2),"bool",ADM_param_bool},
 {"features.dxva2_override_blacklist_version",offsetof(my_prefs_struct,features.dxva2_override_blacklist_version),"bool",ADM_param_bool},
 {"features.dxva2_override_blacklist_profile",offsetof(my_prefs_struct,features.dxva2_override_blacklist_profile),"bool",ADM_param_bool},
 {"features.vdpau",offsetof(my_prefs_struct,features.vdpau),"bool",ADM_param_bool},
 {"features.xvba",offsetof(my_prefs_struct,features.xvba),"bool",ADM_param_bool},
 {"features.libva",offsetof(my_prefs_struct,features.libva),"bool",ADM_param_bool},
 {"features.videotoolbox",offsetof(my_prefs_struct,features.videotoolbox),"bool",ADM_param_bool},
 {"features.enable_opengl",offsetof(my_prefs_struct,features.enable_opengl),"bool",ADM_param_bool},
 {"features.cap_refresh_enabled",offsetof(my_prefs_struct,features.cap_refresh_enabled),"bool",ADM_param_bool},
 {"features.cap_refresh_value",offsetof(my_prefs_struct,features.cap_refresh_value),"uint32_t",ADM_param_uint32_t},
 {"features.sdlDriver",offsetof(my_prefs_struct,features.sdlDriver),"std::string",ADM_param_stdstring},
 {"features.use_last_read_dir_as_target",offsetof(my_prefs_struct,features.use_last_read_dir_as_target),"bool",ADM_param_bool},
 {"keyboard_shortcuts.use_alternate_kbd_shortcuts",offsetof(my_prefs_struct,keyboard_shortcuts.use_alternate_kbd_shortcuts),"bool",ADM_param_bool},
 {"keyboard_shortcuts.swap_up_down_keys",offsetof(my_prefs_struct,keyboard_shortcuts.swap_up_down_keys),"bool",ADM_param_bool},
 {"keyboard_shortcuts.alt_mark_a",offsetof(my_prefs_struct,keyboard_shortcuts.alt_mark_a),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_mark_b",offsetof(my_prefs_struct,keyboard_shortcuts.alt_mark_b),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_reset_mark_a",offsetof(my_prefs_struct,keyboard_shortcuts.alt_reset_mark_a),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_reset_mark_b",offsetof(my_prefs_struct,keyboard_shortcuts.alt_reset_mark_b),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_reset_markers",offsetof(my_prefs_struct,keyboard_shortcuts.alt_reset_markers),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_goto_mark_a",offsetof(my_prefs_struct,keyboard_shortcuts.alt_goto_mark_a),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_goto_mark_b",offsetof(my_prefs_struct,keyboard_shortcuts.alt_goto_mark_b),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_begin",offsetof(my_prefs_struct,keyboard_shortcuts.alt_begin),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_end",offsetof(my_prefs_struct,keyboard_shortcuts.alt_end),"std::string",ADM_param_stdstring},
 {"keyboard_shortcuts.alt_delete",offsetof(my_prefs_struct,keyboard_shortcuts.alt_delete),"std::string",ADM_param_stdstring},
 {"update.enabled",offsetof(my_prefs_struct,update.enabled),"bool",ADM_param_bool},
 {"update.lastCheck",offsetof(my_prefs_struct,update.lastCheck),"uint32_t",ADM_param_uint32_t},
 {"lastfiles.lastdir_read",offsetof(my_prefs_struct,lastfiles.lastdir_read),"std::string",ADM_param_stdstring},
 {"lastfiles.lastdir_write",offsetof(my_prefs_struct,lastfiles.lastdir_write),"std::string",ADM_param_stdstring},
 {"lastfiles.file1",offsetof(my_prefs_struct,lastfiles.file1),"std::string",ADM_param_stdstring},
 {"lastfiles.file2",offsetof(my_prefs_struct,lastfiles.file2),"std::string",ADM_param_stdstring},
 {"lastfiles.file3",offsetof(my_prefs_struct,lastfiles.file3),"std::string",ADM_param_stdstring},
 {"lastfiles.file4",offsetof(my_prefs_struct,lastfiles.file4),"std::string",ADM_param_stdstring},
 {"lastprojects.lastdir_read",offsetof(my_prefs_struct,lastprojects.lastdir_read),"std::string",ADM_param_stdstring},
 {"lastprojects.lastdir_write",offsetof(my_prefs_struct,lastprojects.lastdir_write),"std::string",ADM_param_stdstring},
 {"lastprojects.file1",offsetof(my_prefs_struct,lastprojects.file1),"std::string",ADM_param_stdstring},
 {"lastprojects.file2",offsetof(my_prefs_struct,lastprojects.file2),"std::string",ADM_param_stdstring},
 {"lastprojects.file3",offsetof(my_prefs_struct,lastprojects.file3),"std::string",ADM_param_stdstring},
 {"lastprojects.file4",offsetof(my_prefs_struct,lastprojects.file4),"std::string",ADM_param_stdstring},
 {"message_level",offsetof(my_prefs_struct,message_level),"uint32_t",ADM_param_uint32_t},
 {"audio_device.audiodevice",offsetof(my_prefs_struct,audio_device.audiodevice),"std::string",ADM_param_stdstring},
 {"audio_device.alsa_device",offsetof(my_prefs_struct,audio_device.alsa_device),"std::string",ADM_param_stdstring},
 {"videodevice",offsetof(my_prefs_struct,videodevice),"uint32_t",ADM_param_uint32_t},
 {"priority.encoding",offsetof(my_prefs_struct,priority.encoding),"uint32_t",ADM_param_uint32_t},
 {"priority.indexing",offsetof(my_prefs_struct,priority.indexing),"uint32_t",ADM_param_uint32_t},
 {"priority.playback",offsetof(my_prefs_struct,priority.playback),"uint32_t",ADM_param_uint32_t},
 {"Default.postproc_type",offsetof(my_prefs_struct,Default.postproc_type),"uint32_t",ADM_param_uint32_t},
 {"Default.postproc_value",offsetof(my_prefs_struct,Default.postproc_value),"uint32_t",ADM_param_uint32_t},
 {"Default.downmixing",offsetof(my_prefs_struct,Default.downmixing),"uint32_t",ADM_param_uint32_t},
 {"Default.language",offsetof(my_prefs_struct,Default.language),"std::string",ADM_param_stdstring},
 {"Default.warn_for_fonts",offsetof(my_prefs_struct,Default.warn_for_fonts),"bool",ADM_param_bool},
 {"Default.multiload_use_custom_size",offsetof(my_prefs_struct,Default.multiload_use_custom_size),"bool",ADM_param_bool},
 {"Default.multiload_custom_size_m",offsetof(my_prefs_struct,Default.multiload_custom_size_m),"uint32_t",ADM_param_uint32_t},
 {"Default.delete_first_pass_log_files",offsetof(my_prefs_struct,Default.delete_first_pass_log_files),"bool",ADM_param_bool},
 {"avisynth.avisynth_always_ask",offsetof(my_prefs_struct,avisynth.avisynth_always_ask),"bool",ADM_param_bool},
 {"avisynth.avisynth_defaultport",offsetof(my_prefs_struct,avisynth.avisynth_defaultport),"uint32_t",ADM_param_uint32_t},
 {"avisynth.avisynth_localport",offsetof(my_prefs_struct,avisynth.avisynth_localport),"uint32_t",ADM_param_uint32_t},
 {"reset_encoder_on_video_load",offsetof(my_prefs_struct,reset_encoder_on_video_load),"bool",ADM_param_bool},
 {"load_pictures_reverse_order",offsetof(my_prefs_struct,load_pictures_reverse_order),"bool",ADM_param_bool},
 {"hdr.tonemapping",offsetof(my_prefs_struct,hdr.tonemapping),"uint32_t",ADM_param_uint32_t},
 {"hdr.target_luminance",offsetof(my_prefs_struct,hdr.target_luminance),"float",ADM_param_float},
 {"hdr.saturation",offsetof(my_prefs_struct,hdr.saturation),"float",ADM_param_float},
 {"hdr.boost",offsetof(my_prefs_struct,hdr.boost),"float",ADM_param_float},
{NULL,0,NULL}
};
