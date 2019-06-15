#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
ll ans=0;
int fast_power(int n, int m)
{
    if(m==0)
        return 1;
        cout<<"a "<<endl;
        ans=fast_power(n,m/2);
         cout<<"b "<<endl;
        ans*=ans;
         cout<<"c "<<endl;
    if(m&1)
        return n*ans;
           cout<<"d "<<endl;
    return ans;

}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
      cout<<fast_power(5,2)<<endl;
}

