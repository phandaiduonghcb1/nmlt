#include <bits/stdc++.h>
using namespace std;


int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    if ((a + b) <= c)
        cout << "Khong phai tam giac"<<endl;
    else {
        if (a==b && b==c)
            cout << "Tam giac deu,";
        else if (a==b || b==c)
            cout << "Tam giac can,";
        else if (a*a + b*b == c*c)
            cout << "Tam giac vuong,";
        else
            cout << "Tam giac thuong,";
        float p = (a+b+c)/2;
        float dientich = sqrt(p*(p-a)*(p-b)*(p-c));
        long s = 1000 * dientich;
        if (s % 10 >= 5) s += 10;
        s=s/10;
        float dt=s*0.01;
        cout << " dien tich = " <<dt<< endl;
    }
    return 0;
}
