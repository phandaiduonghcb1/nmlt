#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >>a>>b;
    if (b==0)
    {
        if (a==0)
            cout <<"VSN";
        else cout <<"x = 0";
    }
    else
    {
        if (a!=0)
            cout <<"x = "<<(float)-b/a;
        else
            cout <<"VN";
    }
    return 0;
}
