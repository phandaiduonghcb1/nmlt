#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,i;
    cin >>n;
    s=0;
    for (i=1;i<=n;i++)
        s=s+i;
    if (n==0) cout <<"S(0) = 0";
    else if (n==1) cout <<"S(1) = 1";
    else
    {cout <<"S("<<n<<") = 1";
    for (i=2;i<=n;i++)
        cout <<" + "<<i;
    cout << " = "<<s;}
    return 0;
}
