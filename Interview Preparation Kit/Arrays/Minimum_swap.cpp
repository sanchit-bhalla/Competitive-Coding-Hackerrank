#include<iostream>
using namespace std;
void MinSwap(int a[],int n)
{
    int temp[n]={0}; //Initialize all elements of array temp with zero
    int swaps=0,len_g,i,j;
    for(i=0;i<n;i++)
    {
        if(a[i]==i+1)
            temp[i]=1;
        len_g = 0; // Length of graph is zero initially.
        j=i;
        while (temp[j]==0)
        {
            temp[j]=1;
            len_g++;
            j=a[j]-1;
        }
        if(len_g>0)
        {
            swaps=swaps+len_g-1; // min. swap required to sort graph is
                                 //one less than number of nodes
        }
    }
    cout<<swaps;
}
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    MinSwap(a,n);
}
