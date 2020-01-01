#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x[] = {"muoiw","mootj","hai","ba","tu","lam","sau","bay","tam","chin"};
    int a,m,b,n;
    cin >>n>>m>>a>>b;
    if (n==4)
            cout <<"bon nghin ";
        else if (n==5)
            cout <<"nam nghin ";
        else if (n==0)
            cout <<"";
        else
           for (int i=1;i<=10;i++)
                if (n==i)
                    cout <<x[i]<<" nghin ";




    if (m==4)
            cout <<"bon tram ";
        else if (m==5)
            cout <<"nam tram ";
        else if ((m==0) && (n==0))
            cout <<"";
        else if ((m==0) && (n!=0))
            cout <<"khong tram ";
        else
           for (int i=1;i<=10;i++)
                if (m==i)
                    cout <<x[i]<<" tram ";
        if ((a==0) && (b!=0) && (m=!0))
            cout <<"le ";
        if (a==0)
        {switch (b)
    {
        case 0:{if (m==0 && n==0) cout <<"khong";break;}
        case 1:{cout <<"mootj";break;}
        case 2:{cout <<"hai";break;}
        case 3:{cout <<"ba";break;}
        case 4:{cout <<"bon";break;}
        case 5:{cout <<"nam";break;}
        case 6:{cout <<"sau";break;}
        case 7:{cout <<"bay";break;}
        case 8:{cout <<"tam";break;}
        case 9:{cout <<"chin";break;}
    }}
    else if (a==1)
    {
        cout <<"muoiwf ";
        if (b==0)
            cout <<"";
        else if (b==1)
            cout <<"mootj";
        else if (b==4)
            cout <<"bon";
        else
            for (int i=0;i<=10;i++)
            if((b==i))
                   cout <<x[i];
    }
    else if (a==5)
    {
        cout <<"nam muoiw ";
        x[1]="moots";
        for (int i=1;i<=10;i++)
            if((b==i))
                cout <<x[i];
    }
    else
    {
        x[1] = "moots";
        switch (a)
        {
        case 2:{cout <<"hai muoiw ";break;}
        case 3:{cout <<"ba muoiw ";break;}
        case 4:{cout <<"bon muoiw ";break;}
        case 6:{cout <<"sau muoiw ";break;}
        case 7:{cout <<"bay muoiw ";break;}
        case 8:{cout <<"tam muoiw ";break;}
        case 9:{cout <<"chin muoiw ";break;}
        }
        for (int i=1;i<=10;i++)
            if((b==i))
                cout <<x[i];
    }
    return 0;
}
