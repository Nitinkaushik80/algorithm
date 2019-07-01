#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
#define  f(i,a,b) for(int i=a;i<b;i++)
const ll N = 1000005;
ll a[N];
void multiply(ll &k, ll no)
{
    ll carry=0;
    for(int i=0;i<k;i++)
    {
        ll product = a[i]*no + carry;
         a[i] = product % 10;
         carry = product / 10;
    }
    while(carry)
    {
        a[k] = carry;
        k++;
        carry=carry/10;
    }
}
void factorial(ll m)
{
    ll k=1;
    a[0]=1;
    for(int i=2;i<=m;i++)
    {
        multiply(k,i);
    }
     for(int i=k-1;i>=0;i--)
           cout<<a[i];
           cout<<endl;
           cout<<k<<endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n,m,a,b,c;
           ll counter=0,counter1=0,counter2=0;
           ll result=0,ans=0, flag=0;
           cin>>n;
           factorial(n);
       }
}

