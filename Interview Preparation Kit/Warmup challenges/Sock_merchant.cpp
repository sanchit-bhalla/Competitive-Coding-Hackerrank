#include<iostream>
using namespace std;

void socks_pair(int n,int *ar)
{
    int pairs=0,sum_=0;
    for(int i=0; i<n; i++)
    {
        sum_=0;
        if(ar[i]!=0)
        {
            int temp=ar[i];
            for(int j=i;j<n;j++)
            {
              if (temp==ar[j])
                {
                    sum_=sum_+1;
                    ar[j]=0;
                }
             }
         }

        pairs= pairs+(sum_/2);
    }
    return pairs;
}
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i=0; i<n; i++)
        cin>>ar[i];
    socks_pair(n,ar);
}
