#include "stdafx.h"
#include "FrameWnd.h"

#ifdef _DEBUG
    #pragma comment(lib, "DuiLib_d.lib")
#else
    #pragma comment(lib, "DuiLib.lib")
#endif

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
    ::CoInitialize(NULL);
    // ��Դ����
    CPaintManagerUI::SetResourceType(UILIB_FILE);
    // ��Դ·��
    CDuiString strResourcePath = CPaintManagerUI::GetInstancePath();
    strResourcePath += _T("..\\skin\\transwnd2\\");
    CPaintManagerUI::SetResourcePath(strResourcePath.GetData());
    //  CPaintManagerUI::SetResourceZip(_T("Skin.zip"));
    CFrameWnd *pFrame = new CFrameWnd(_T("MainWnd.xml"));
    pFrame->Create(NULL, _T("Redrain��͸������demo"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
    pFrame->ShowModal();
    delete pFrame;
    ::CoUninitialize();
    return 0;
}
