#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
#define  f(i,a,b) for(int i=a;i<b;i++)
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n,m,a,b,c;
     //      ll counter=0,counter1=0,counter2=0;
           ll ans=0, flag=0,sum=0;
           cin>>n;
           ll arr[n],prefixSum[n];
           memset(prefixSum,0,sizeof prefixSum);
           prefixSum[0]=1;
           f(i,0,n)
           {
               cin>>arr[i];
               sum+=arr[i];
               sum%=n;
               sum=(sum+n)%n;
               prefixSum[sum]++;
           }
           ll result=0;
            for(int i=0;i<n;i++)
            {
                ll w=prefixSum[i];
                result+=((w)*(w-1))/2;
            }

         //    ans=result;
             cout<<result<<endl;



       }
}
