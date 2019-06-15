#include<bits/stdc++.h>
using namespace std;
void job(int n, int * profit, int * deadline)
{
      int max_deadline;
      cin>>max_deadline;
    int total=0;
    int result[max_deadline];
     for(int i=0;i<max_deadline;i++)
    result[i]=0;
    for(int i=0;i<n;i++)
    {
        if(result[deadline[i]-1]==0)
        {
            result[deadline[i]-1]=profit[i];
            total+=profit[i];
        }
        else
        {
            for(int j=deadline[i]-1;j>=0;j--)
            {
                if(result[j]==0)
                {
                    result[j]=profit[i];
                    total+=profit[i];
                }
            }
        }
    }
    cout<<total<<endl;
}
int main()
{
    int j,temp=0;
    int profit[20];
    int deadline[20];
   // int max_deadline;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>profit[i];
     for(i=0;i<n;i++)
    cin>>deadline[i];
  //  cin>>max_deadline;
  //    sort(profit,profit+n, greater<int>());   // wrong we can't use it
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
     {
        if(profit[i]<profit[j])
        {
        temp=profit[i];
        profit[i]=profit[j];
       profit[j]=temp;

         temp=deadline[i];
        deadline[i]=deadline[j];
       deadline[j]=temp;}}
   /*  for(i=0;i<n;i++)
    cout<<profit[i];*/
    job(n,profit,deadline);
}
