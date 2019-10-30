#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int toInt(char n)
{
    return n-'a';
}

int makeAnagram(string a, string b)
{
    vector <int>counts(26,0);
    int res=0;
    for(int i=0;i<a.length();i++)
        counts[toInt(a[i])]++;
    for(int j=0;j<b.length();j++)
    {
        if( counts[toInt(b[j])]>0 )
            counts[toInt(b[j])]--;
        else
            res++;
    }
    for(int k=0;k<26;k++)
        res+= counts[k];

    return res;
}
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cout<<makeAnagram(a,b);
}
