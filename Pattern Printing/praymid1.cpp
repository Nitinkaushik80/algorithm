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
            if(j>=1+i && j<=9-i && k)
            {
            cout<<"*";
            k=0; }
            else
            {
                cout<<" ";
                k=1;}
        }
        cout<<"\n";
    }
}
