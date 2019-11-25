#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
#define pb push_back
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
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define Mod 1000000007

const int N = 1e5 + 5;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           string s;
           ll n,k,b,c,x,y,z,i;
           ll counter=0,counter1=0,counter2=0;
           ll sum=0,result=0,ans=0, flag=0;
           cin>>n>>k;
           ll a[n];
           f(i,0,n)
           cin>>a[i];
           deque<ll>q;
           for(i=0;i<k;i++)
           {
               while(!q.empty() && a[i]>a[q.back()])
                q.pop_back();
                q.push_back(i);
           }
           for(;i<n;i++)
           {
               cout<<a[q.front()]<<" ";
               debug(i);
               // delete the those which are not the part of window
               while(!q.empty() && (q.front()<=(i-k)))
                q.pop_front();
                // delete the smaller elements in the deque
               while(!q.empty() && (a[i]>a[q.back()]))
                q.pop_back();
                q.push_back(i);
           }
           cout<<a[q.front()]<<endl;
                  }

}

