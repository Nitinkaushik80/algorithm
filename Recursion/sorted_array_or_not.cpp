#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
bool sorted(int *a, int n )
{
    if(n==1)
        return true;
    if(a[0]<a[1] && sorted(a+1,n-1))
        return true;
    return false;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
      int a[]={1,3,5,7,9,11};
      int n=6;
      if(sorted(a,n))
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
}

