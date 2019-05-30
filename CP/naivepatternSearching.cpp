#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long int t;
   cin>>t;
   while(t--)
   {
       string text;
       string pattern;
       cin>>text;
       cin>>pattern;
       bool found=false;
       ll result=0;
       for(int i=0;i<text.size()-pattern.size()+1;i++)
       {
           found=true;
           for(int j=0;j<pattern.size();j++)
           {
               if(text[i+j]!=pattern[j])
               {
                   found=false;
                   break;
               }
           }
           if(found==true)
           {
               result=i;
            break;
           }
       }
       cout<<found<<endl;
       cout<<result<<endl;
    }
}
