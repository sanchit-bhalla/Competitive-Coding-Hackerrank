#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,f=0,count_valley=0,sum_=0;  // f=0 for mountain and f= -1 for valley
    string s;
    cout<<"Enter no. of steps :";
    cin>>n;cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='D')
            sum_--;
        else if (s[i]=='U' && sum_==-1)
        {
            count_valley++;
            sum_++;
        }
        else if(s[i]=='U')
            sum_++;
    }
    cout<<count_valley;
}
