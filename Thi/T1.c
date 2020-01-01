
#include <bits/stdc++.h>
using namespace std;
struct NGAY
{
    int d;
    int m;
    int y;
};
struct HOPSUA
{
    char thuonghieu[50];
    char loaisua[100];
    char xuatsu[50];
    float dungtich;
    int dongia;
    NGAY hsd;
};
void nhap(HOPSUA hs[], int &n)
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>hs[i].loaisua;
        cin>>hs[i].dungtich;
        cin>>hs[i].thuonghieu;
        cin>>hs[i].xuatsu;
        cin>>hs[i].hsd.d>>hs[i].hsd.m>>hs[i].hsd.y;
        cin>>hs[i].dongia;
    }
}
void xuat(HOPSUA hs[], int n)
{
    cout<<n<<endl;
    for (int i=1;i<=n;i++)
    {
        cout<<hs[i].loaisua<<", "<<hs[i].dungtich<<", "<<hs[i].thuonghieu<<", "<<hs[i].xuatsu<<", "<<hs[i].hsd.d<<"/"<<hs[i].hsd.m<<"/"<<hs[i].hsd.y<<", "<<hs[i].dongia<<endl;
    }
}
int main()
{
    int n;HOPSUA hs[100];
    nhap(hs,n);
    xuat(hs,n);
    return 0;
}
