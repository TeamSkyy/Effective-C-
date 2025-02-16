#include "WebBrowser.h"
#include "WebDisplay.h"
using namespace WebBrowserFuncs;
int main()
{
    WebBrowser w1;
    w1.cleanCache();
    w1.cleanCookies();
    w1.cleanHistory();
    displayWeb1(w1);
}
