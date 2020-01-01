#include<bits/stdc++.h>
using namespace std;
int n;
int tinh(int i)
{
    if (((i%2)!=0)&&(n%i==0))
        return i;
     tinh(i-1);
}
int main()
{

    cin>>n;
    cout<<tinh(n);


}
