#include <bits/stdc++.h>
using namespace std;
int a[13] = {0,30,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int d,m,y;
    cin>>d>>m>>y;
    if ((y%4==0)  && (y%100!=0) || (y%400==0) && (y>0))
    {
        if ((m>12)||(m<1))
            cout<<"Thang khong hop le.";
        else
        for (int i=1;i<13;i=i+1)
        if ((m=i) && (d>0) && (d<=a[i]))
            cout <<d<<"/"<<m<<"/"<<y<<" la ngay hop le.";
            else
                cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";
    }
    if ((y%4)!=0 && (y%100)==0 || (y%400)!=0 && (y>0))
    {
        {a[3]=28;
        if ((m>12)||(m<1))
            cout<<"Thang khong hop le.";
        else
        for (int i=1;i<13;i=i+1)
        if ((m==i) && (d>0) && (d<=a[i]))
            cout <<d<<"/"<<m<<"/"<<y<<" la ngay hop le.";
            else
                if ((m==i) && (d<=0) && (d>a[i]))
                cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";}
    }
    if (y<=0) cout <<"Nam khong hop le.";
    return 0;
}
