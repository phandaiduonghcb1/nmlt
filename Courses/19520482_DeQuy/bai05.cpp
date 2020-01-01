#include <bits/stdc++.h>

using namespace std;
int tich(int x,int n)
{
    if ((n==1)) return x;
    else
        return (x*tich(x,n-1));
}
int main()
{
    int n,x;cin >>x>>n;
    cout <<tich(x,n);
}
