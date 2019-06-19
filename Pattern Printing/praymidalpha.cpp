#include<iostream>
using namespace std;
int main()
{
      int i,j,k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {
            if(j>=7-i &&  j<=3+i && i>=2)
            {
                cout<<" ";
                if(j==5)
                    k--;
                }
            else
            {
                cout<<(char)k;
                j<=4?k++:k--;
            }
        }
        cout<<"\n";
    }
}
