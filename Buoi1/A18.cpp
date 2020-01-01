#include <bits/stdc++.h>

using namespace std;
float tp(float x)
{
    long s = x*1000;
    if ((s%10)>=5)
        s = s+10;
    s=s/10;
    return s*0.01;
}
int main()
{
    float a,b,c;
    cin >>a>>b>>c;
    float d = (a+b+c)/3;
    float dtb= tp(d);
    if (dtb>=9)
    {
        cout <<"DTB = "<<dtb<<endl;
        cout <<"Loai: XUAT SAC";
    }
    if ((dtb>=8) && (dtb<9))
    {
        cout <<"DTB = "<<dtb<<endl;
        cout <<"Loai: GIOI";
    }
    if ((dtb<8) && (dtb>=7))
    {
        cout <<"DTB = "<<dtb<<endl;
        cout <<"Loai: KHA";
    }
    if ((dtb>=6) && (dtb<7))
    {
        cout <<"DTB = "<<dtb<<endl;
        cout <<"Loai: TB KHA";
    }
    if ((dtb>=5) && (dtb<6))
    {
        cout <<"DTB = "<<dtb<<endl;
        cout <<"Loai: TB";
    }
    if ((dtb>=4) && (dtb<5))
    {
        cout <<"DTB = "<<dtb<<endl;
        cout <<"Loai: YEU";
    }
    if (dtb<4)
    {
        cout <<"DTB = "<<dtb<<endl;
        cout <<"Loai: KEM";
    }
    return 0;
}
