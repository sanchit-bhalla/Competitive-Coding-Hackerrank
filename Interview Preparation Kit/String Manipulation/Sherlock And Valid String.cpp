#include<iostream>
#include<string.h>
#include<set>
using namespace std;

/*
    There are three valid conditions :-
  1.If all have the same frequency
  2.If only 1 character has a frequency that is 1 greater than all others
  3.If all have the same frequency except 1 element which has
        a frequency of 1
*/
string isValid(string s)
{
    int counts[26]={},n=s.length();
    for(int i=0;i<n;i++)
        counts[ s[i]-'a' ]++;
    string ans="NO";

    for(int i= -1; i<26; i++)
    {
        // i= -1 case is used if string is already valid
        if(i>=0 && counts[i]==0)
            continue;

        if(i>=0)
            counts[i]--;

        // if we insert all positive frequencies into a set, it should
        // contain only 1 element if string is now valid
        set<int> myset;
        for(int j=0;j<26;j++)
        {
            if(counts[j])
                myset.insert(counts[j]);
        }

        if(myset.size()==1)
            ans="YES";

        if(i>=0)
            counts[i]++;
    }
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    string result = isValid(s);
    cout << result;
    return 0;
}
