#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
bool Palindrome(string str)
{
    ll i,j;
    i=0;
    j=str.length()-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       string str;
       cin>>str;
       bool result=Palindrome(str);
       ll len;
       len=str.length();
       if(result)
       {
           if(len & 1)
            cout<<"ODD YES"<<endl;
           else
              cout<<"EVEN YES"<<endl;
       }
       else
            cout<<"NO"<<endl;
    }
}
