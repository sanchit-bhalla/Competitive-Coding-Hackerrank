#include<iostream>
using namespace std;

int  count_jumps(int *c,int n)
{
    int jumps=0,i=0;
    while(i<n-1)
    {
        if(c[i+2] == 1)
            i++;
        else
            i=i+2;
        jumps++;
    }
    return jumps;
}
int main()
{
    int n; cin>>n; // number of clouds
    int c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    cout<<count_jumps(&c[0],n);
}
