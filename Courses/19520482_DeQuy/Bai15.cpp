#include<bits/stdc++.h>
using namespace std;
int x(int n) {
    if (n<=0) return 1;

    int y=0;
    for (int i =0;i<n;i++)
        y+=(i+1)*(i+1)*x(n-(i+1));
    return y;
}

int main()
{
    int n;
    cin>>n;
    cout<<x(n)<<endl;

    return 0;
}
