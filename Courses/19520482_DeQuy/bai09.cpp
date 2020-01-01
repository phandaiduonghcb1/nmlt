#include <bits/stdc++.h>
using namespace std;
float tong(int n)
{
    if (n==1) return 1.0/2.0;
    else
        return (tong(n-1)+1/float(n*(n+1)));

}
int main()
{
    int n;
    cin >>n;
    cout <<tong(n);
    return 0;
}
