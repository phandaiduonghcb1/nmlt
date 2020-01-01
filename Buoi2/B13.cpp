#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,tong;
    cin >>n;
    for (i=1;i<=n;i++)
        {
            tong=0;
            for (j=1;j<i;j++)
            {
                if (i%j==0) tong=tong+j;
            }
            if (tong==i) cout <<i<<endl;
        }
    return 0;
}
