#include <bits/stdc++.h>

using namespace std;
float tp( float x)
{
    long long s = 1000*x;
        if (abs(s)%10>= 5)
        {
            if (s>0) s += 10;
            else if (s<0) s-=10;
        }
        s=s/10;
        return s*0.01;

}
int main()
{

float a,b;
cin>>a>>b;
cout<<"("<<a<<")"<<" + "<<"("<<b<<") = "<<tp(a+b)<<endl;

cout<<"("<<a<<")"<<" - "<<"("<<b<<") = "<<tp(a-b)<<endl;

cout<<"("<<a<<")"<<" * "<<"("<<b<<") = "<<tp(a*b)<<endl;

cout<<"("<<a<<")"<<" / "<<"("<<b<<") = "<<tp(a/b)<<endl;



    return 0;
}
