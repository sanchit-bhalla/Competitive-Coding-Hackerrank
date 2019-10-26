#include<iostream>
#include<vector>
#include<map>
using namespace std;

long countTriplets(vector<long> arr, long r)
{
    map<long,long>l2,l3;
    long total = 0;
    for(long k=0;k<arr.size();k++)
    {
       if(l3.count(arr[k]))
        total += l3[arr[k]];
       if(l2.count(arr[k]))
        l3[arr[k]*r] += l2[arr[k]];
       l2[arr[k]*r]++;
    }
    return total;
}
int main()
{
    long n,r;
    cin>>n>>r;
    vector<long> arr;
    for(long i=0;i<n;i++)
    {
        long temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<countTriplets(arr,r);
}
