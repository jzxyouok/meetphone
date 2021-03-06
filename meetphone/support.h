#pragma once

#ifndef support_h
#define support_h
#include <json/json.h>
#ifdef __cplusplus
extern "C" {
#endif
void meetphone_get_conf_server(CString& confServer);
int meetphone_get_json_port();
const char* meetphone_get_ui_config(const char *key, const char *def);
int meetphone_get_ui_config_int(const char *key, int def);
void meetphone_set_ui_config_int(const char *key , int val);
void meetphone_set_ui_config(const char *key , const char * val);
void convert_utf8_to_unicode(const char *utf8, CString &unicode);
BOOL http_get_request(CString &restMethod, Json::Value &response );
BOOL http_post_request(CString &restMethod, CString &formData, Json::Value &response);
void load_png_to_imagelist(CImageList &imageList, CString &imagePath);

#ifdef __cplusplus
} 
#endif

#endif

