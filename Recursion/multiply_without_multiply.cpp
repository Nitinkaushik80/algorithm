#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
ll ans=0;
int mul(int n, int m)
{
    if(m==0)
        return ans;
    ans+=n;
    mul(n,m-1);
   // cout<<ans<<" ";
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
     cout<< mul(5,8);
}

