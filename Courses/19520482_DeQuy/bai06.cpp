#include <bits/stdc++.h>
using namespace std;
int tong(int n)
{
    if (n==0) return 0;
    else
        return (tong(n/10)+1);

}
int main()
{
    int n;
    cin >>n;
    cout <<tong(n);
    return 0;
}
