#include<iostream>
using namespace std;
void knapsack(int o,double u, double weight[] , double profit[])
{
    double tp=0;
    double a=0;
    int i=0;
    while(weight[i]<u)
    {
        tp=tp+profit[i];
        u=u-weight[i];
        i++;
    }
    cout<<tp<<endl;
    cout<<u<<endl;
    cout<<i<<endl;
    if(u!=0)
    {
        a=(double)u/weight[i];}
        cout<<a<<endl;
        cout<<weight[i]<<endl;
        cout<<profit[i]<<endl;
          tp=tp+(a*profit[i]);
       //   u=0;

    cout<<"the profit is :"<<tp<<endl;


}
int main()
{
   double capacity;
    int i,j;
    int n;
    double temp;
    cin>>n;
        cin>>capacity;
    double weight[]={2,3};
   double profit[]={10,9};
    double ratio[20];

/*    for(i=0;i<n;i++)
        cin>>weight[i];

    for(i=0;i<n;i++)
        cin>>profit[i];*/

    for(i=0;i<n;i++)
    ratio[i]=(double)profit[i]/(double)weight[i];
    cout<<ratio[1]<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
     {
        if(ratio[i]<ratio[j])
        {
        temp=ratio[i];
        ratio[i]=ratio[j];
        ratio[j]=temp;

         temp=weight[i];
        weight[i]=weight[j];
        weight[j]=temp;

         temp=profit[i];
        profit[i]=profit[j];
        profit[j]=temp;
        }
      }
    }
    cout<<endl;
     for(i=0;i<n;i++)
        cout<<profit[i]<<"  ";
        cout<<endl;
     for(i=0;i<n;i++)
        cout<<weight[i]<<"  ";
        cout<<endl;
    for(i=0;i<n;i++)
      cout<<ratio[i]<<"  ";
      cout<<endl;
    knapsack(n,capacity,weight,profit);
}
