#pragma once

int WxInitSDKWithPath(const wchar_t *wxPath, bool debug, int port);
int WxInitSDKWithPid(DWORD pid, bool debug, int port);
int WxInitSDK(bool debug, int port);
int WxDestroySDK();
