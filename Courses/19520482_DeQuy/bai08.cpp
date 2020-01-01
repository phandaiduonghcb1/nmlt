#include <bits/stdc++.h>
using namespace std;
float tong(int n)
{
    if (n==0) return 1;
    else
        return (tong(n-1)+1/float(2*n+1));

}
int main()
{
    int n;
    cin >>n;
    cout <<tong(n);
    return 0;
}
