#include <bits/stdc++.h>
int a[100][100];
using namespace std;
void nhap(int m, int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        cin>>a[i][j];
}
void xuat(int m, int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int m,n;
    cin >>m>>n;
    nhap(m,n);
    xuat(m,n);
    return 0;
}
