#include<iostream>
#include<vector>
#include<string.h>
#include<unordered_map>
using namespace std;
string two_strings(string str1,string str2)
{
    unordered_map<char,int>s1;
    for(auto s:str1)
        s1[s]++;
    for(auto k:str2)
    {
        if(s1[k]>0)
            return "YES";
    }
    return "NO";

}
int main()
{
    int p; cin>>p;
    string str1,str2;
    for(int i=0;i<p;i++)
    {
        cin>>str1>>str2;
        cout<<two_strings(str1,str2)<<endl;
    }
}
