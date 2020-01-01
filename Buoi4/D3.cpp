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
        cout <<a[i]<<endl;
}
int tong(int n)
{
    int s=0;
    for (int i=1;i<=n;i++)
        s=s+a[i];
    return s;
}
int main()
{
    int n;
    nhap(a,n);
    xuat(a,n);
    cout <<"Tong mang: "<<tong(n);
    return 0;
}
