#include <bits/stdc++.h>
using namespace std;
int tinhx(int n);
int tinhy(int n);
int tinhx(int n)
{
    if (n==0) return 1;
    long a=tinhx(n-1);
    long b=tinhy(n-1);
    return a+b;

}
int tinhy(int n)
{
    if (n==0) return 0;
    long a=tinhx(n-1);
    long b=tinhy(n-1);
    return 3*a+2*b;

}
int main()
{
    int n;
    cin >>n;
    cout <<"x="<<tinhx(n)<<endl;
    cout <<"y="<<tinhy(n);
    return 0;
}
