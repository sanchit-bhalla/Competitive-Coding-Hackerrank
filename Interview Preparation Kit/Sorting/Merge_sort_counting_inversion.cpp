#include<iostream>
#include<vector>
using namespace std;

// VIDEO LINK  ---->   https://www.youtube.com/watch?v=yzkzQ7oZwIE

class MergeSort
{
public:
    long c,n;
    MergeSort(long n1)
    {
        c = 0;
        n = n1;
    }
    void Merge(long *arr,long s,long e)
    {
        long i=s,mid=(s+e)/2;
        long j=mid+1;
        long k=s;

        long temp[n];

        while(i<=mid && j<=e)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else
            {
                temp[k++]=arr[j++];
                c = c+mid-i+1;
            }

        }
        while(i<=mid)
            temp[k++]=arr[i++];
        while(j<=e)
            temp[k++]=arr[j++];

        for(long i=s;i<=e;i++)
            arr[i] = temp[i];

    }
    void mergesort(long arr[],long s,long e)
    {
            //Base case
        // if start >= end
        if(s>=e)
            return;

        // Divide
        long mid = (s+e)/2;
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);

        // Merge subarrays
        Merge(arr,s,e);
    }
    long give_count()
    {
        return c;
    }
};


int main()
{
    int t; cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n; cin >> n;
        MergeSort m(n);
        long arr[n];
        for(long i=0;i<n;i++) cin>>arr[i];
        m.mergesort(arr,0,n-1);
        long result = m.give_count();

        cout << result << "\n";

    }

}

