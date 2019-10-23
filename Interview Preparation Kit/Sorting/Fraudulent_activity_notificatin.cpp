#include<iostream>
//#include<bits/stdc++.h>
#include<vector>
using namespace std;

int activityNotifications(vector<int> expenditure, int d)
{
    int c=0;
    double median;
    vector<int>counts(201,0);
    vector<int>temp(d);

    for(long int k=0;k<=d;k++) counts[expenditure[k]]++;

    for(int i=d;i<expenditure.size();i++)
    {
        int j=0;
        for(int h=0;h<201;h++)
        {
            int t = counts[h];
            while(t--)
            {
                temp[j] = h;
                j++;
            }
        }

        if(d%2==0)
            median = (temp[d/2]+temp[(d/2)-1])/2.0;
        else
            median = temp[d/2];
        if (expenditure[i]>=median*2)
            c++;

        counts[expenditure[i-d]]--;
        counts[expenditure[i]]++;
    }
    return c;
}
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int>expenditure(n);

    for(int i=0;i<n;i++) cin>>expenditure[i];

    cout<<activityNotifications(expenditure,d);
}
