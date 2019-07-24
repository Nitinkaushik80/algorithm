#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define mem(tabl,i) memset(tabl, i, sizeof(tabl))
#define sp(x,y) fixed<<setprecision(y)<<lf(x)
#define debug(c) cout << #c << " = " << c << endl;
#define  f(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007

const int N = 1e5 + 5;

ll lis(ll *a, ll n)
{
    ll best;
    ll cost;
    ll dp[100];
    f(i,0,100)
    dp[i]=1;
    debug(dp[60]);
    f(i,1,n)
    {
        best=-1;
        f(j,0,i)
        {
            if(a[j]<=a[i])
            {
                ll cost = 1 + dp[j];
                dp[i]=max(cost,dp[i]);
            }
        }
        best=max(dp[i],best);
    }
    return best;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           vector<ll>v,s;
           ll n,b,c;
           ll counter=0,counter1=0,counter2=0;
           ll result=0,ans=0, flag=0;
          ll a[]={10,22,9,33,21,50,41,60,80};
          n=9;
           ans=lis(a,n);
           cout<<ans<<endl;
       }
}

