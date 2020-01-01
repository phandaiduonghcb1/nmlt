#include<bits/stdc++.h>
using namespace std;

int tinh(int n)
{
    if (n==0) return 0;
    else
    {
        if (n%10%2!=0)
            {int x=n/10;
            return tinh(n/10)+n%10;}
        else return tinh(n/10);
    }

}
int main()
{
    int n;
    cin>>n;
    cout<<tinh(n);

}
