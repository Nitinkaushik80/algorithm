#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
char arr[][10]={ "zero ","one  "," two ","three ","four ","five "," sixes"," seven"," eight ","nine "};
void print(ll n)
{
    if(n==0)
        return  ;
    print(n/10);
    cout<<arr[n%10]<<" ";
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n;
           cin>>n;
           print(n);
       }
}

