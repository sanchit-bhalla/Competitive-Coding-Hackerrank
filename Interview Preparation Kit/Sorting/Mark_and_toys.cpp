#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long int maximumToys(vector<int> prices,long long int k)
{
    sort(prices.begin(),prices.end());
    long long int c=0,i=0;
    while(k>0)
    {
        k = k-prices[i];
        i++;
        if (k>=0)
            c++;
    }
    return c;
}
int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<int> prices(n);
    for(long long int i=0;i<n;i++) cin>>prices[i];

    cout<<maximumToys(prices,k);
}
