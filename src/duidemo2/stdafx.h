// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once
//#include "drivergenius/utils/sdk.h"

// ������뽫λ������ָ��ƽ̨֮ǰ��ƽ̨��ΪĿ�꣬���޸����ж��塣
// �йز�ͬƽ̨��Ӧֵ��������Ϣ����ο� MSDN��
#ifndef WINVER                      // ����ʹ���ض��� Windows XP ����߰汾�Ĺ��ܡ�
   #define WINVER          0x0600        // ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
#endif

#ifndef _WIN32_WINNT                // ����ʹ���ض��� Windows XP ����߰汾�Ĺ��ܡ�
    #define _WIN32_WINNT    0x0600    // ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
#endif

#ifndef _WIN32_WINDOWS              // ����ʹ���ض��� Windows 98 ����߰汾�Ĺ��ܡ�
    #define _WIN32_WINDOWS 0x0410   // ����ֵ����Ϊ�ʵ���ֵ����ָ���� Windows Me ����߰汾��ΪĿ�ꡣ
#endif

#ifndef _WIN32_IE                   // ����ʹ���ض��� IE 6.0 ����߰汾�Ĺ��ܡ�
    #define _WIN32_IE 0x0600        // ����ֵ����Ϊ��Ӧ��ֵ���������� IE �������汾��
#endif

#if !defined(WIN32_LEAN_AND_MEAN)
#define WIN32_LEAN_AND_MEAN         // �� Windows ͷ���ų�����ʹ�õ�����
#endif

// Windows ͷ�ļ�:
//#define NOMINMAX      //std::min


//#include "buildcfg/buildcfg.h"
#include <windows.h>

// C ����ʱͷ�ļ�
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <objbase.h>
#include <MMSystem.h>
#include <iostream>
#include <fstream> 
#include <iomanip>
#include <algorithm>
#include<cmath>
// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <GdiPlus.h>
#pragma comment( lib, "GdiPlus.lib" )
using namespace Gdiplus;
#pragma   comment(lib, "winmm.lib ")
//=========================
#include <windowsx.h>       // protect template members from windowsx.h macros (atlgdi.h)
#include <atlstr.h>         // CString
#include <atltypes.h>       // CSize, CPoint, CRect
#include <atlimage.h>
#define _WTL_NO_CSTRING
#define _WTL_NO_WTYPES
#include <atlbase.h>        // CComModule, CRegKey, CHandle         
#include <atlapp.h>         // CAppModule, CTempBuffer, CIdleHandler, CMessageLoop
#include <atlmisc.h>        // WTL::CPoint, WTL::CFindFile
#include <atlcoll.h>        // CAtlArray, CAtlList, CAtlMap
#include <atlframe.h>
#include <atlcrack.h>
#include <atlgdi.h>
#include <atlfile.h>        // CAtlFileMapping
#include <atlcomcli.h>
#include <atlstr.h>			// CString
#include <atltypes.h>		// CSize, CPoint, CRect
#include <atlimage.h>
#include <atlsync.h>		// ATL::CCriticalSection, ATL::CEvent, ATL::CMutex, ATL::CMutexLock, ATL::CSemaphore
#include <shellapi.h>
#include <atlctrls.h>		// WTL::CImageList
#include <atlctrlx.h>
#include <atlscrl.h>		// WTL::CScrollImpl
#include <atldlgs.h>
#include <atlsimpcoll.h>	// CSimpleArray, CSimpleMap
#include <atltime.h>		// ATL::CTime, ATL::CTimeSpan, ATL::CFileTime
#include <atlpath.h>		// ATL::ATLPath, ATL::CPathT

#include <commctrl.h>       //CComPtr
#include <Shobjidl.h>       //ITaskbarList3
//
//#pragma warning(push)              // �����ô�ͷ�ļ�
#pragma warning(disable:4244)
#pragma warning(disable:4267)       // �ӡ�size_t��ת������DWORD
#pragma warning(disable:4996)       //  _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4311)       //   �ӡ�LPCTSTR������DWORD����ָ��ض�
#pragma warning(disable:4819)       //   ���ļ����������ڵ�ǰ����ҳ(936)�б�ʾ���ַ�
#pragma warning(disable:4018)       //   warning C4018: '<' : signed/unsigned mismatch

//#pragma warning(pop)              // �ָ�����ľ��漶��
#define CACTUS_DLL
// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <tracetool/tracetool.h>
#include <DuiLib/UIlib.h>
using namespace DuiLib;

#ifdef _DEBUG
    #ifdef _UNICODE
        #pragma comment(lib, "../../lib/win32d_md/DuiLib.lib")
        #pragma comment(lib, "../../lib/win32d_md/dgcore.lib")
        #pragma comment(lib, "../../lib/win32d_md/dgctrl.lib")
        #pragma comment(lib, "../../lib/win32d/cactus_dll_mdd.lib")
    #else
        #pragma comment(lib, "DuiLib_d.lib")
    #endif    
#else
    #ifdef _UNICODE
        #pragma comment(lib, "../../lib/win32_md/DuiLib.lib")
        #pragma comment(lib, "../../lib/win32_md/dgctrl.lib")
        #pragma comment(lib, "../../lib/win32_md/dgcore.lib")
        #pragma comment(lib, "../../lib/win32/cactus_dll_md.lib")

    #else
        #pragma comment(lib, "DuiLib.lib")
    #endif
#endif
