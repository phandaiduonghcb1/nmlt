#include <bits/stdc++.h>
using namespace std;
int main()
{
    int L,i;
    string n;
    cin >>n;
    L = n.length();
    for (i=(L-1);i>=0;i--)
    {
        if (i==(L-1) && int(n[L-1])==48)
            cout<<"";
        else
            cout <<n[i];
    }
    return 0;


}
