#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
void in(int n)
{
    if(n==0)
        return ;
        cout<<"n1 "<<n<<" ";
    in(n-1);
     cout<<endl;
     cout<<"n2 "<<n<<" ";
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
      in(5);
}

