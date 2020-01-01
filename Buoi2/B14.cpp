#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,uoc;
    cin >>n;
    uoc=0;
    for (i=1;i<=n;i++)
        {
            if ((n%i==0) && (i%2!=0) && (i>uoc))
                uoc=i;
        }
    cout <<uoc;
    return 0;
}
