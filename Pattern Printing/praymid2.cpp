#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=7-i &&  j<=3+i && i>=2)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<"\n";
    }
}
