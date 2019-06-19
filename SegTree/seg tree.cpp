#include<bits/stdc++.h>
#include<climits>
using namespace std;
#define  ll long long int
int query( int *tree , int ss , int se, int l , int r,int index)
{
     if(l<=ss && r>=se)
    {
        cout<<"hello 1"<<endl;
        return tree[index];
    }
    if(ss>r || se<l)
    {
        cout<<"hello 2"<<endl;
        return INT_MAX;
    }
    cout<<"hello 3"<<endl;
    int mid=(ss+se)/2;
    int left=query(tree ,ss , mid, l ,r, 2*index+1);
    int right=query( tree, mid+1, se , l , r , 2*index+2);
    cout<<"hello 4 "<<endl;
    return min(left,right);

}
void build(int *arr, int *tree, int s, int e , int index)
{
    if(s==e)
    {
        tree[index]=arr[s];
        return ;
    }
    int mid=(s+e)/2;
    build(arr, tree, s,mid, 2*index+1);
    build(arr, tree, mid+1, e, 2*index+2);
    tree[index]=min(tree[2*index+1],tree[2*index+2]);

    return;
}
void update(int *arr, int *tree, int s, int e, int i, int inc , int index)
{
    if(s>i || e<i)
    {
        return;
    }
    if(i==s && i==e)
    {
        arr[i]+=inc;
        tree[index]+=inc;
        return;
    }
    int mid=(s+e)/2;
    update(arr, tree, s,mid,i,inc, 2*index+1);
    update(arr, tree, mid+1, e,i,inc, 2*index+2);
    tree[index]=min(tree[2*index+1],tree[2*index+2]);
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
           int arr[]={1,3,2,5,6,4};
           int n=sizeof(arr)/sizeof(arr[0]);
           int *tree= new int[4*n+1];
           build(arr,tree, 0,n-1,0);
          for(int i=0;i<13;i++)
           {
               cout<<tree[i]<<" ";
           }

          cout<<endl;
           int l,r;
           cin>>l>>r;
           cout<<query(tree,0,n-1,l,r,0)<<endl;
           update(arr, tree,0,n-1,2,6,0);

            for(int i=0;i<13;i++)
           {
               cout<<tree[i]<<" ";
           }
           cout<<endl;

            for(int i=0;i<6;i++)
           {
               cout<<arr[i]<<" ";
           }

}

