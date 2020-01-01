
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
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int lonnhat(int a[100][100], int m,int n)
{
    int maxx=a[0][0];
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (a[i][j]>maxx) maxx=a[i][j];
    return maxx;
}
void vitrilonnhat(int a[100][100], int m, int n)
{
    cout<<"Vi tri lon nhat:"<<endl;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (a[i][j]==lonnhat(a,m,n))
                cout<<"("<<i<<", "<<j<<")"<<endl;
}
int main()
{
    int m,n;
    cin >>m>>n;
    nhap(a,m,n);
    xuat(a,m,n);
    vitrilonnhat(a,m,n);
    return 0;
}
