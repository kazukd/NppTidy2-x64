#include "StdAfx.h"
#include "AboutDialog.h"
#include "PluginDetails.h"
#include "resource.h" 
#include "Commctrl.h"

NppData				nppData2;

AboutDialog::AboutDialog(void)
{
}

AboutDialog::~AboutDialog(void)
{
}

void AboutDialog::doDialog()
{
    if (!isCreated())
        create(IDD_ABOUTDIALOG);

	goToCenter();
}


INT_PTR CALLBACK AboutDialog::run_dlgProc(UINT Message, WPARAM wParam, LPARAM lParam)
{
	
	switch (Message) 
	{
        case WM_INITDIALOG :
		{
			return TRUE;
		}
		
		
		case WM_NOTIFY:
		{
			switch (((LPNMHDR)lParam)->code)
			{

			case NM_CLICK:          // Fall through to the next case.

			case NM_RETURN:
			{
				switch (wParam) {
				case IDC_SYSLINK1:
					::ShellExecute(nppData2._nppHandle, _T("open"), _T(PLUGIN_URL), NULL, NULL, SW_SHOW);
					break;

				case IDC_SYSLINK2:
					::ShellExecute(nppData2._nppHandle, _T("open"), _T("http://github.com/w3c/tidy-html5"), NULL, NULL, SW_SHOW);
					break;

				case IDC_SYSLINK3:
					::ShellExecute(nppData2._nppHandle, _T("open"), _T("https://github.com/bruderstein/NppTidy2"), NULL, NULL, SW_SHOW);
					break;
				}
			}
			}

			break;
		}
		

		case WM_COMMAND : 
		{
			
				
				switch (wParam)
				{
				
					case IDDONATE :
						::ShellExecute(nppData2._nppHandle, _T("open"), _T(PLUGIN_DONATION), NULL, NULL, SW_SHOW);
						break;

					case IDOK:
					case IDCANCEL :
						display(FALSE);
						return TRUE;

					default :
						break;
				}
			
		}
	}
	return FALSE;
}