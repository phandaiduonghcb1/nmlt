
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
bool kt(HOPSUA hs[], NGAY ngay, int i)
{
    if (ngay.y==hs[i].hsd.y && ngay.m==hs[i].hsd.m && ngay.d==hs[i].hsd.d)
        return 1;
    if (ngay.y>hs[i].hsd.y) return 1;
    if (ngay.m>hs[i].hsd.m) return 1;
    if (ngay.d>hs[i].hsd.d) return 1;
    return 0;
}
void ngayhethan(HOPSUA hs[], NGAY ngay, int n)
{
    int dem = 0;int s=0;
    for (int i=1;i<=n;i++)
        if (kt(hs,ngay,i))
        {
            dem=dem+1;
            s=s+hs[i].dongia;
        }
    cout<<"So hop sua het han sau ngay "<<ngay.d<<"/"<<ngay.m<<"/"<<ngay.y<<" la: "<<dem<<endl;
    cout<<"Tong gia tri: "<<s<<endl;
    int z=1;
        {
           for (int i=1;i<=n;i++)
            if (kt(hs,ngay,i))
            {
            cout<<z<<" "<<hs[i].loaisua<<", "<<hs[i].dungtich<<", "<<hs[i].thuonghieu<<", "<<hs[i].xuatsu<<", "<<hs[i].hsd.d<<"/"<<hs[i].hsd.m<<"/"<<hs[i].hsd.y<<", "<<hs[i].dongia<<endl;
            z++;
            }
        }

}
int main()
{
    NGAY ngay;
    int n;HOPSUA hs[100];
    nhap(hs,n);
    cin>>ngay.d>>ngay.m>>ngay.y;
    xuat(hs,n);

    ngayhethan(hs,ngay,n);
    return 0;
}
