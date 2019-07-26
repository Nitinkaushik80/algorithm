#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define si(a) a.size()
#define p pair< ll,ll >
#define v vector< ll >
#define vi vector<p>
#define mem(tabl,i) memset(tabl, i, sizeof(tabl))
#define sp(x,y) fixed<<setprecision(y)<<lf(x)
#define debug(c) cout << #c << " = " << c << endl;
#define  f(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007

const int N = 1e5 + 5;
ll dp[N];
ll rod(ll *a , ll n)
{
    if(dp[n]!=-1)
        return dp[n];
    if(n==0)
        return 0;
    ll best=0;
    for(int i=1;i<=n;i++)
    {
        ll cur=a[i]+rod(a,n-i);
        best=max(best,cur);
    }
     dp[n]=best;
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
           string s;
           ll a[N];
           ll n,b,c,x,y;
           ll counter=0,counter1=0,counter2=0;
           ll sum=0,result=0,ans=0, flag=0;
           cin>>n;
           for(int i=1;i<=n;i++)
                cin>>a[i];
                mem(dp,-1);
                f(i,0,4)
                cout<<dp[i]<<" ";
            result=rod(a,n);
            cout<<result<<endl;
       }
}

