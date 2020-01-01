#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x;
    int i;
    cin >>x>>i;
    long long s=pow(10,i+1)*x;
    if (s%10>=5)
        s=s+10;
    s=s/10;
    cout <<s/pow(10,i);
    return 0;
}
