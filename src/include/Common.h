#pragma once
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cwchar>

#include <Shellapi.h>
#include <Commctrl.h>
#include <objidl.h>
#include <gdiplus.h>
#include <Commctrl.h>
#include <tchar.h>
#include <Strsafe.h>
#include <process.h>
#include <gdiplus.h>
#include <Unknwn.h>

#include <functional>
#include <cinttypes>
#include <cstdint>
#include <locale>
#include <sstream>
#include <iomanip>
#include <codecvt>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <codecvt>
#include <functional>
#include <vector>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <map>

#include "rapidjson/document.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/filereadstream.h"

#pragma comment(lib, "gdiplus.lib")
#pragma comment(lib, "Comctl32.lib")
#pragma comment(lib, "Msimg32.lib")
#pragma comment(lib, "ws2_32.lib")