#include <iostream>
#include <algorithm> //Ëã·¨

using namespace std;

string t = "";

void p(string q, int r=1)
{
    for(int u=0; u<r; u++)
    {
        cout << q;
        t+=q;
    }
}

void drawboxs()
{
    int n=5;
    cout << "N = " << n << endl;
    string s = "+----+";
    int x = 1;
    int v = -1;
    for(int b=n;b>0;b+=0)
    {
        p("   ",v);
        if(b!=n)x==1?p("|  "):p("+--");
        p(s);
        p("   ",(b-2)*2);
        if(b!=1) p(s);
        if(b!=n) x==1?p("  |"):p("--+");
        p("   ",v);
        p("\n");
        if(x!=1)
        {
            b--;
            v++;
        }
        x=-(x);
        s=x==1?"+----+":"|    |";
    }
    reverse(t.begin(),t.end());
    cout << t.substr(1);

}
