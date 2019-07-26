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

ll grid(ll a[][4],ll m,ll n)
{
    ll x,y;
    ll dp[10][10];
    dp[0][0]=1;
    f(i,1,m)
    {
        dp[0][i]=dp[0][i-1]+a[0][i];
    }
    f(i,1,n)
    {
        dp[i][0]=dp[i-1][0]+a[i][0];
    }
    f(i,1,m)
    {
        f(j,1,n)
        {
             x=dp[i-1][j]+a[i][j];
             y=dp[i][j-1]+a[i][j];
            dp[i][j]=min(x,y);
        }
    }
    f(i,0,3)
    {
        f(j,0,3)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
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
           ll a[4][4]={
             {1,2,3},
             {4,8,2},
             {1,5,3}
                           };
            grid(a,3,3);
       }
}

