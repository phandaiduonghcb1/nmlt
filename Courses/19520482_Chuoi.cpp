#include <bits/stdc++.h>
using namespace std;
void xuat(char a[])
{
    cout<<"{";
    for (int i=0;i<=strlen(a)-2;i++)
       cout<<"'"<<a[i]<<"',";
    cout<<"'"<<a[strlen(a)-1]<<"'}"<<endl;
}
void noi2chuoi(char cHo[30],char cTen[30])
{
    char cHoten[60];
    strcpy(cHoten,cHo);
    cHoten[strlen(cHo)]=' ';
    for (int i=strlen(cHo)+1;i<=strlen(cHo)+strlen(cTen)+1;i++)
        cHoten[i]=cTen[i-strlen(cHo)-1];
    cout <<cHoten;
}
void inhoa(char a[],char b[])
{
    if (a[0]>='a' && a[0]<='z') a[0]=a[0]-32;
    if (b[0]>='a' && b[0]<='z') b[0]=b[0]-32;
    for (int i=1;i<strlen(a);i++)
        if (a[i]>='A' && a[i]<='Z') a[i]=a[i]+32;
    for (int i=1;i<strlen(b);i++)
        if (b[i]>='A' && b[i]<='Z') b[i]=b[i]+32;
    noi2chuoi(a,b);
    return;
}
int dem(char a[])
{
    int dem = 0;
    for (int i=0;i<strlen(a);i++)
    {
        if (a[i]=='e') dem=dem+1;
    }
    return dem;
}

void tansuat (char cHo[30],char cTen[30])
{
    cout<<"Tan suat:"<<endl;
    char cHoten[60];
    for (int i=0;i<strlen(cHo);i++)
        if (cHo[i]>='A' && cHo[i]<='Z') cHo[i]=cHo[i]+32;
    for (int i=0;i<strlen(cTen);i++)
        if (cTen[i]>='A' && cTen[i]<='Z') cTen[i]=cTen[i]+32;
    strcpy(cHoten,cHo);
    for (int i=strlen(cHo);i<=strlen(cHo)+strlen(cTen);i++)
        cHoten[i]=cTen[i-strlen(cHo)];
    for (char i='a';i<='z';i++)
        {
        int demm=0;
        for (int j=0;j<strlen(cHoten);j++)
            {
                if (cHoten[j]==i)
                demm=demm+1;
            }
        if (demm!=0)
            cout<<"* "<<i<<": "<<demm<<endl;
        }


    return;
}
main()
{
    char cHo[30],cTen[30];
    cin>>cHo>>cTen;
    cout<<"cHo = ";xuat(cHo);
    cout<<"cTen = ";xuat(cTen);
    cout<<"cTong = ";noi2chuoi(cHo,cTen);cout<<endl;
    cout<<"cHOA = ";inhoa(cHo,cTen);cout<<endl;
    cout<<"ch = 'e', so la xuat hien ch la DemE = "<<dem(cHo)+dem(cTen)<<endl;
    tansuat(cHo,cTen);
    return 0;
}
