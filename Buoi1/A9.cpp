#include <bits/stdc++.h>

using namespace std;
float tp( float x)
{
    long long s = 1000*x;
        if (s%10>= 5)
        {
            s += 10;
        }
        s=s/10;
        return s*0.01;

}
int main()
{
    float a,b,c;
    cin >>a>>b>>c;
    float p=(a+b+c)/2;
    float S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout <<tp(S);
    return 0;
}
