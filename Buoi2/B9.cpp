#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float s = 0;
    cin >>n;
    for (i=1;i<=n;i++)
        s=s+1/float(i);
    if (n==0) cout <<"S(0) = 0";
    else
    if (n==1) cout <<"S(1) = 1";
    else
    {
    cout <<"S("<<n<<") = 1";
    for (i=2;i<=n;i++)
        cout << " + 1/"<<i;
    cout <<" = "<<roundf(s*100)/100;
    }
    return 0;
}
