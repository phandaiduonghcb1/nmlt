#include <bits/stdc++.h>

using namespace std;
int a[200];int n;int x;
void nhap(int a[],int &n)
{
    cout<<"Nhap n: "<<endl;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cout<<"nhap a["<<i<<"] : ";cin>>a[i];

    }
}
void xuat(int a[],int n)
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";cout<<endl;
}
int tongmang(int a[], int n)
{
    int s=0;
    for (int i=0;i<n;i++)
        s=s+a[i];
    return s;
}
int sochan(int a[],int n)
{
    int dem=0;
    for (int i=0;i<n;i++)
        if (a[i]%2==0) dem=dem+1;
    return dem;
}
bool nt(int x)
{
    if (x<2) return 0;
    for (int i=2;i<x;i++)
        if (x%i==0) return 0;
    return 1;
}
int tongnt(int a[],int n)
{
    int s=0;
    for (int i=0;i<n;i++)
    {
       if (nt(a[i])) s=s+a[i];
    }
    return s;
}
void vitrile(int a[],int n)
{
    for (int i=0;i<n;i++)
        if (a[i]%2!=0) cout <<i<<" ";
}
int gtln(int a[],int n)
{
    int ln=a[0];
    for (int i=0;i<n;i++)
        if (ln<a[i]) ln=a[i];
    return ln;
}
void sochandt(int a[],int n)
{
    for (int i=0;i<n;i++)
        if (a[i]%2==0)
        {
            cout <<a[i];
            return;
        }
    cout <<"-1";
}
int ucln(int a[],int n)
{
   int t=0;
   for ( int i=0;i<n;i++)
    t=__gcd(t,a[i]);
   return t;

}
void lietke(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        int dem=0;
        int m=a[i];
        for (int j=i+1;j<n;j++)
            if (m==a[j]) dem=dem+1;
        if (dem==0) cout <<a[i]<<" ";
    }
}
int songuyentoln(int a[], int n)
{
    int dem;
    int ln=a[0];
    for (int i=0;i<n;i++)
        if (ln<a[i]) ln=a[i];
    if (ln<2) return 2;
    do
    {
        dem=0;
        ln++;
        for (int i=2;i<ln;i++)
            if (ln%i==0) dem=dem+1;
    }
    while (dem!=0);
    return ln;
}
void lietkettd(int a[],int n)
{
    for (int i=0;i<n-1;i++)
        if (a[i]>abs(a[i+1]))
        cout <<a[i]<<" ";
}
int gtamdt(int a[],int n)
{
    for (int i=0;i<n;i++)
        if (a[i]<0)
            return a[i];
    return -1;
}
void gtamln(int a[],int n)
{
    int ln=gtamdt(a,n);
    for (int i=0;i<n;i++)
        if ((a[i]<0) && (a[i]>ln)) ln=a[i];
    cout<<ln<<endl;
}
void sxle(int a[],int n)
{
    int b[100];int vitri[100];int x=0;
    for (int i=0;i<n;i++)
    if(a[i]%2!=0)
    {
        b[x]=a[i];
        vitri[x]=i;
        x++;
    }
    sort(b,b+x);
    for (int i=0;i<x;i++)
        a[vitri[i]]=b[i];
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void menu()
{
    cout<<"1.Nhap mang mot chieu cac so nguyen."<<endl;
    cout<<"2.Xuat mang"<<endl;
    cout<<"3.Tinh tong cac phan tu trong mang."<<endl;
    cout<<"4.Dem so luong gia tri chan co trong mang."<<endl;
    cout<<"5.Tinh tong tat ca cac so nguyen to trong mang."<<endl;
    cout<<"6.In ra vi tri cac phan tu co gia tri le trong mang."<<endl;
    cout<<"7.Tim gia tri lon nhat trong mang."<<endl;
    cout<<"8.Tim so chan dau tien trong mang so nguyen."<<endl;
    cout<<"9.Tim uoc chung lon nhat cua cac phan tu trong mang."<<endl;
    cout<<"10.Tim so nguyen to nho nhat lon hon cac gia tri trong mang."<<endl;
    cout<<"11.Liet ke cac gia tri xuat hien chi 1 lan trong mang."<<endl;
    cout<<"12.Liet ke cac gia tri thoa man dieu kien lon hon tri tuyet doi cua gia tri dung ngay sau no."<<endl;
    cout<<"13.Tim gia tri am dau tien trong mang."<<endl;
    cout<<"14.Tim gia tri am lon nhat trong mang."<<endl;
    cout<<"15.Sap xep le tang dan nhung cac gia tri khac giu nguyen vi tri."<<endl;
    cout<<"0.Thoat !!!"<<endl;
}
int main()
{   menu();
    while (1)
    {
        cin>>x;
        switch(x)
{

    case 1:{
        nhap(a,n);
        break;}
    case 2:{
        cout<<"Xuat mang: ";xuat(a,n);
        break;}
    case 3:{
        cout<<"Tong mang: "<<tongmang(a,n)<<endl;
        break;}
    case 4:{
        cout<<"So luong gia tri chan: "<<sochan(a,n)<<endl;
        break;}
    case 5:{
        cout<<"Tong cac so nguyen to: "<<tongnt(a,n)<<endl;
        break;}
    case 6:{
        cout<<"Vi tri cac phan tu le: ";vitrile(a,n);cout<<endl;
        break;}
    case 7:{cout<<"Gia tri lon nhat: "<<gtln(a,n)<<endl;break;}
    case 8:{cout<<"So chan dau tien: ";sochandt(a,n);cout<<endl;break;}
    case 9:{cout<<"Uoc chung lon nhat: "<<ucln(a,n)<<endl;break;}
    case 10:{cout<<"So nguyen to nho nhat lon hon cac gia tri trong mang: "<<songuyentoln(a,n)<<endl;break;}
    case 11:{cout<<"Cac gia tri xuat hien 1 lan duy nhat: ";lietke(a,n);cout<<endl;break;}
    case 12:{cout<<"Cac gia tri lon hon tri tuyet doi cua gia tri dung ngay sau no: ";lietkettd(a,n);cout<<endl;break;}
    case 13:{cout<<"Gia tri am dau tien: "<<gtamdt(a,n)<<endl;break;}
    case 14:{cout<<"Gia tri am lon nhat: ";gtamln(a,n);break;}
    case 15:{cout<<"Vi tri da sap xep: ";sxle(a,n);break;}
    case 0:
        {   cout<<"Ket thuc chuong trinh "<<endl;
            exit(1);
        }
    default :
        {
            system("cls");
            menu();
            cout<<"Ban vui long chon lai yeu cau "<<endl;
        }

    }
    }

    return 0;
}
