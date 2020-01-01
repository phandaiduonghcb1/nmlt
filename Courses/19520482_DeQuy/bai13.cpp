#include <bits/stdc++.h>
using namespace std;
int tinh(int n)
{
    if (n==0) return 1;
    if (n==1) return 1;
    long a=tinh(n-1);
    long b=tinh(n-2);
    return a+b;

}
int main()
{
    int n;
    cin >>n;
    cout <<tinh(n);
    return 0;
}
