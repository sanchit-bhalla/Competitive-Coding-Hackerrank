#include<iostream>
#include<vector>
#include<list>
using namespace std;

// Hint: Similar to counting sort
/*
    We maintain a frequency vector for each window of size d in the array.
    This can be done by keeping track of the starting and ending point
    of the window.
    First time we will make frequency vector of name counts and size d.
    After that we update this vector by decreasing count for starting
    index and increasing the count for ending-index+1 for calculating
    median for new window.

    The complexity is O(n x Maximum number in vector)
*/
int activityNotifications(vector<int> expenditure, int d)
{
    int c=0,median_index;
    double median;
    vector<int>counts(201,0);
    vector<int>temp(d);

    for(long int k=0;k<d;k++) counts[expenditure[k]]++;

    for(int i=d;i<expenditure.size();i++)
    {
        median_index = (d/2)+1;
        int temp;
        for(int h=0;h<201;h++)
            {
                median_index -= counts[h];
                if(median_index<=0)
                {
                    temp = h;
                    break;
                }
            }
        if(d%2!=0)
            median = temp;
        else
        {
            int median_index2 = d/2;
            for(int f=0;f<201;f++)
            {
                median_index2 -= counts[f];
                if(median_index2<=0)
                {
                    median = (f+temp)/2.0;
                    break;
                }
            }
        }

        if (expenditure[i]>=median*2)
            c++;

        counts[expenditure[i-d]]--;//Starting index of window
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
