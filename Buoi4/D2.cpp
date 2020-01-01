#include <bits/stdc++.h>

using namespace std;
int a[200];
void nhap(int a[],int &n)
{
    cin >>n;
    for (int i=1;i<=n;i++)
        cin >>a[i];
}
void xuat(int a[],int n)
{
    for (int i=n;i>=1;i--)
        cout <<a[i]<<endl;
}
int main()
{
    int n;
    nhap(a,n);
    xuat(a,n);
    return 0;
}
