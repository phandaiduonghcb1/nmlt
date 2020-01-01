#include <bits/stdc++.h>
using namespace std;
int tong(int n)
{
    if (n==0) return 0;
        else
    {int x = n%10;
    return (tong(n/10)+x);}

}
int main()
{
    int n;
    cin >>n;
    cout <<tong(n);
    return 0;
}
