#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int s[n];
   s[0]=0;
   for (int i=1;i<=n;i++)
     s[i]=s[i-1]+i;
   if  (n==0) cout<<"S(0) = 0 ";
   else
   {
       for (int i=1;i<=n;i++)
       {
           cout<<"i = "<<i<<":"<<endl;
           cout<<" S("<<i<<") = 1 ";
           for (int j=2;j<=i;j++) cout<<"+ "<<j<<" ";
           cout<<endl;

       }
   }
    return 0;
}
