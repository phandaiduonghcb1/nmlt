#include <bits/stdc++.h>

using namespace std;
int main()
{   float a[3];
    float tg;
    int i;
    int j;
    for (i=1;i<4;i=i+1)
       {cin >>a[i];}
    for (i=1;i<3;i=i+1)
        for (j=2;j<4;j=j+1)
            if (a[i]>a[j])
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
    for (i=1;i<4;i++)
        {cout <<a[i]<<" ";}
    return 0;
}
