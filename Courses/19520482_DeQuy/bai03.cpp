#include <bits/stdc++.h>

using namespace std;
float tong(int n)
{
    if (n==1) return 1;
    else
        return (1/(n*1.0)+tong((n-1)));
}
int main()
{
    int n;cin >>n;
    cout <<tong(n);
}
