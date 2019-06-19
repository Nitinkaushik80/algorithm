#include<bits/stdc++.h>
using namespace std;
int main()
{ int p,q;
    int i,j;
    int m=0;
    cout<<"enter no. of rows";
    cin>>p;
     q=(p+1)/2;
    for(i=1;i<=p;i++)
    {
         int k=1;
          if(p%2==0)
          {
              if(i<=q) m++;
              if(i>q+1)m--;
          }
          else
           i<=q?m++:m--;
        for(j=1;j<=p;j++)
        {
            if(j>q-m && j<q+m && k)
            {
                cout<<i;
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;
            }
}cout<<"\n";        }}


