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
    cout <<n<<endl;
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n;
    nhap(a,n);
    xuat(a,n);
    return 0;
}
