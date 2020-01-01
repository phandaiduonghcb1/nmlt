#include <bits/stdc++.h>
int a[100][100];
using namespace std;
void nhap(int a[100][100], int m, int n)
{
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        cin>>a[i][j];
}
void xuat(int a[100][100], int m, int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            if (i==0||i==m-1||j==0||j==n-1)
                cout<<a[i][j]<<" ";
    }
}
int main()
{
    int m,n;
    cin >>m>>n;
    nhap(a,m,n);
    xuat(a,m,n);
    return 0;
}
