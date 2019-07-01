#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
#define  f(i,a,b) for(int i=a;i<b;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<ll>v;
     ll n;
     cin>>n;
     ll arr[n],arr2[n];
     f(i,0,n)
     cin>>arr[i];
     f(i,0,n)  cin>>arr2[i];
     ll i=0,j=0;
     ll k=2*n;
     while(k!=0)
     {
         if(arr[i]<arr2[j])
         {

             v.push_back(arr[i]);
             i++;
         }
         else
         {
              v.push_back(arr2[j]);
             j++;
         }
      //   cout<<k<<endl;
         k--;
     }
        if(v.size()&1)
            cout<<v[v.size()/2]<<endl;
        else
        {
            ll g=v[v.size()/2];
            ll h=v[v.size()/2-1];
            ll f=(g+h)/2;
            cout<<f<<endl;
        }
}

