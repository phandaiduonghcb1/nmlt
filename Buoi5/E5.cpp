#include <bits/stdc++.h>
int a[100][100];
using namespace std;
bool nguyento(int x)
{
    for (int i=2;i<x;i++)
        if (x%i==0) return 0;
    return 1;
}
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
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int tong(int a[100][100], int m,int n)
{
    int s=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (nguyento(a[i][j]))
            s=s+a[i][j];
    return s;
}
int main()
{
    int m,n;
    cin >>m>>n;
    nhap(a,m,n);
    xuat(a,m,n);
    cout<<"S = "<<tong(a,m,n);
    return 0;
}
