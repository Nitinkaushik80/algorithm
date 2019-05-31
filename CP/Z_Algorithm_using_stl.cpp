/*
   Take the input as:

   1
   abcababc
   abc

 */
#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
vector<ll>v;
void buildTable(vector<char>c)
{

    v.push_back(0);

    ll left,right,result=0;
    for(int i=1;i<c.size();i++)
    {
        if(c[0]!=c[i])
        {
            v.push_back(0);
        }
        else
        {
            left=0;
            right=i;
            while(right<c.size())
            {
                if(c[left]!=c[right])
                {
                        break;
                }
                left++;
                right++;
            }
            result=abs(i-right);
            v.push_back(result);
        }
    }
    cout<<"Table : "<<endl;
    for(auto &x : v)
        cout<<x<<" ";
}
void substringMatch(string p)
{
    ll len=p.length();
    int flag=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==len)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Pattern found"<<endl;
    else
        cout<<"Pattern not found"<<endl;

}
void substringCount(string p)
{
    ll len=p.length();
    ll counter=0;
    for(auto &x: v)
    {
        if(x==len)
        {
            counter++;
        }
    }
    cout<<"The count of the substring is : ";
    cout<<counter<<endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long int t;
   cin>>t;
   while(t--)
   {
       ll k;
       int i;
       string text;
       string pattern;
       cin>>text>>pattern;
       vector<char>c;
       for( i=0;i<pattern.length();i++)
             c.push_back(pattern[i]);
        c.push_back('$');
        for( i=0;i<text.length();i++)
        {
         c.push_back(text[i]);
        }
        cout<<"concatenate string are : "<<endl;
      for(auto &x : c)
        cout<<x<<" ";
      cout<<endl;
        buildTable(c);
        cout<<endl;
        substringMatch(pattern);
        substringCount(pattern);
}
}
