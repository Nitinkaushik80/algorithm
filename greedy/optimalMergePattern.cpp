#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int sum=0;
    int ssum=0;
    int arr[]={6,5,2,3};
    int n=4;
    sort(arr,arr+n);
    sum=arr[0]+arr[1];
     v.push_back(sum);
    for(int i=2;i<n;i++)
    {
        if(sum>arr[i]&& sum>arr[i+1])
        {
            ssum+=arr[i]+arr[i+1];
            cout<<ssum<<"  "<<i<<" ";
            v.push_back(ssum);
            sum+=ssum;
            if(i==n-2)
                 v.push_back(sum);
            ssum=0;
            i++;
        }
        else
        {
            sum+=arr[i];
            v.push_back(sum);
     //       cout<<sum<<"  "<<i<<" ";

        }
    }
    cout<<sum<<endl;
    for(auto &i:v)
        cout<<i<<endl;
}
