
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
bool dieukien(int x)
{
    if (x>=10 && x<=20 && x%2==0)
        return 1;
        else return 0;
}
void vitrichan(int a[100][100], int m, int n)
{
    int dem=0;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (!dieukien(a[i][j]))
                dem=dem+1;
    if (dem==(m*n))
        cout<<"Ma tran khong ton tai gia tri thoa dieu kien";
        else
        {   cout<<"Ma tran ton tai cac gia tri thoa dieu kien tai vi tri:"<<endl;
            for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
            if (dieukien(a[i][j]))
                cout<<"("<<i<<", "<<j<<")"<<endl;
        }
}
int main()
{
    int m,n;
    cin >>m>>n;
    nhap(a,m,n);
    xuat(a,m,n);
    vitrichan(a,m,n);
    return 0;
}
