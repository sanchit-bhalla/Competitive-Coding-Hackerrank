#include<iostream>
#include<string.h>
using namespace std;

int toInt(char n)
{
    return n-'A';
}

int alternatingCharacters(string s)
{
    // if state[0]=1 and next character is A, then it should be deleted.
    // if state[1]=1 and next character is B, then it should be deleted.
    int state[2]={0,0};
    int res = 0,index;
    for(int i=0;i<s.length();i++)
    {
        index = toInt(s[i]);
        if(state[index]==1)
            res++;
        else
        {
            state[0] = (index==0)? 1 : 0;
            state[1] = (index==1)? 1 : 0;
        }
    }
    return res;
}
int main()
{
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        string s;
        cin>>s;
        cout<<alternatingCharacters(s)<<endl;
    }
}

