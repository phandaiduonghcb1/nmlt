#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a;float b;float c;
    cin >>a>>b>>c;
    float denta = (b)*(b)-4*(a)*(c);
    if (denta>0)
    {
        cout <<"PT co hai nghiem phan biet:"<<endl;
        cout <<"x1 = "<<(-b+sqrt(denta))/(2*a)<<endl;
        cout <<"x2 = "<<(-b-sqrt(denta))/(2*a)<<endl;
    }
    if (denta==0)
        {cout <<"PT co nghiem kep: x1 = x2 = "<<-b/(2*a);}
    if (denta<0)
        {cout <<"PTVN";}
    return 0;
}
