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
    for (int i=1;i<=n;i++)
        cout <<a[i]<<" ";
}
int lonnhat(int a[],int n)
{
    int m;
    m=a[1];
    for (int i=2;i<=n;i++)
        if (m<a[i]) m=a[i];
    return m;
}
int main()
{
    int n;
    nhap(a,n);
    xuat(a,n);
    cout <<endl<<"Max: "<<lonnhat(a,n);
    return 0;
}
