#include<iostream>
using namespace std;
int main()
{
    long int n,m,k,i,p,q,max_=0,x=0;
    cin>>n>>m;
    long int *a=new long int[n+1](); // If array is large you have to
                            //make it dynamically otherwise you will get
                            // Segmentation Fault
    for(i=0;i<m;i++)
    {
        cin>>p>>q>>k;
        a[p-1]=a[p-1]+k;
        if(q<=(n-1))
            a[q]=a[q]-k;
    }

    for(i=0;i<n;i++)
    {
        x=x+a[i];
        if(max_<x)
            max_=x;
    }
    cout<<max_;
}
