#include <bits/stdc++.h>
using namespace std;
struct nhanvien
{
    int maso;
    string hoten;
    string gioitinh;
    int tuoi;
    int luong;
} nv[100];
void nhap(nhanvien nv[],int &n)
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>nv[i].maso>>nv[i].hoten>>nv[i].gioitinh>>nv[i].tuoi>>nv[i].luong;
}
void xuat(nhanvien nv[],int n)
{
    cout<<n<<endl;
    for (int i=1;i<=n;i++)
    {
        cout<<nv[i].maso<<","<<nv[i].hoten<<","<<nv[i].tuoi<<","<<nv[i].luong<<","<<nv[i].gioitinh<<endl;
    }
}
void nvtn(nhanvien nv[],int n)
{
    int minn = nv[1].tuoi;
    for (int i=1;i<=n;i++)
        if (nv[i].tuoi<minn) minn=nv[i].tuoi;
    cout<<"Nhan vien tre nhat:"<<endl;
    for (int i=1;i<=n;i++)
        if (nv[i].tuoi==minn) {cout<<nv[i].maso<<","<<nv[i].hoten<<","<<nv[i].tuoi<<","<<nv[i].luong<<","<<nv[i].gioitinh<<endl;break;}
}
int main()
{
    int n;
    nhap(nv,n);
    xuat(nv,n);
    nvtn(nv,n);
    return 0;
}
