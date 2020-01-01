#include <bits/stdc++.h>

using namespace std;
int a[200];
void nhap(int a[],int &n)
{
    cin >>n;
    for (int i=0;i<n;i++)
        cin >>a[i];
}
void xuat(int a[],int n)
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
int lonnhat(int a[],int n)
{
    int m;int stt=0;
    m=a[0];
    for (int i=1;i<n;i++)
        if (m<a[i])
        {
            m=a[i];
            stt=i;
        }
    return stt;
}
int main()
{
    int n;
    nhap(a,n);
    xuat(a,n);
    cout <<"Vi Tri Lon Nhat: "<<lonnhat(a,n);
    return 0;
}
