#include<iostream>
using namespace std;
int main()
{
    int i,j;
        for(i=1;i<=5;i++)
    {
        int k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
            cout<<k;
           if(j<=4)
                k++;
            else{
                k--;
         //       cout<<k;
            }
          }
            else
            {
                cout<<" ";
        }}
        cout<<"\n";
    }
}
