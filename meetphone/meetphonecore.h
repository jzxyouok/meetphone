#pragma once
#ifndef meetphonecore_h
#define meetphonecore_h

#include "private.h"
#include "linphonecore.h"
#include <esl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _MeetphoneOutputLog{
	OrtpLogLevel lev;
	CString msg;
	int length;
}MeetphoneOutputLog;

void CALLBACK MeetphoneIterate(HWND hwnd,UINT uMsg,UINT idEvent,DWORD dwTime);
void CALLBACK MeetphoneLog(HWND hwnd,UINT uMsg,UINT idEvent,DWORD dwTime);
void MeetphoneLogHandler(OrtpLogLevel lev, const char *fmt, va_list args);
void MeetphoneRegistrationStateChanged(LinphoneCore *lc, LinphoneProxyConfig *cfg, 
											  LinphoneRegistrationState rs, const char *msg);
void MeetphoneCallStateChanged(LinphoneCore *lc, LinphoneCall *call, LinphoneCallState cs, const char *msg);
void MeetphoneDisplayStatus(LinphoneCore *lc, const char *status);
void MeetphoneNotifyRecvConf(LinphoneCore *lc, LinphoneCall *call, const char *from, const char *ev,int partId);
void MeetphoneShowMainDlg();
void MeetphoneShowMeetDlg(LinphoneCall *call);
void MeetphoneAddSpy(LinphoneCall *call);
void MeetphoneEslInit();
void MeetphoneEslUninit();
void MeephoneAuthInfoRequest(LinphoneCore *lc, const char *realm, const char *username);
extern esl_handle_t event_handle;
extern esl_handle_t api_handle;
#ifdef __cplusplus
} 
#endif

#endif