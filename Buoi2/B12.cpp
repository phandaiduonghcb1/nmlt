#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,dem;
    cin >>n;
    for (i=2;i<=n;i++)
        {
            dem=0;
            for (j=1;j<=i;j++)
            {
                if (i%j==0) dem=dem+1;
            }
            if (dem==2) cout <<i<<endl;
        }
    return 0;
}
