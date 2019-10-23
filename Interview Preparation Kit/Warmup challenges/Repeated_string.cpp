#include<iostream>
#include<string.h>
using namespace std;

long RepeatedString(string s,long n)
{
    long len=s.length(),count_a=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
            count_a++;
    }
    count_a=count_a*(n/len);
    for(int j=0;j<(n%len);j++)
        if (s[j]=='a')
            count_a++;

    return count_a;
}
int main()
{
    string s; cin>>s;
    long n; cin>>n;
    cout<<RepeatedString(s,n);
}
