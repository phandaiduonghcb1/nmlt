#include <bits/stdc++.h>
using namespace std;
bool tinh(int n)
{
    if (n==0) return 1;
    if (n%10%2==0) return tinh(n/10);
    else return 0;
}
int main()
{
    int n;
    cin >>n;
    cout <<tinh(n);
    return 0;
}
