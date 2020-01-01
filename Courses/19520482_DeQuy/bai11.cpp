#include <bits/stdc++.h>
using namespace std;
int tinh(int n)
{
    if (n==0) return 0;
    else return max(n%10,tinh(n/10));
}
int main()
{
    int n;
    cin >>n;
    cout <<tinh(n);
    return 0;
}
