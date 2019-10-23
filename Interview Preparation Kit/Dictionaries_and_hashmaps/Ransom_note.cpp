#include<iostream>
#include<unordered_map>
#include<vector>
#include<string.h>
using namespace std;

void checkMagazine(vector<string> temp, vector<string> verify)
{
    unordered_map<string,int> magazine,note;
    for(auto j:temp)
    {
        magazine[j]++;
    }
    for(auto s:verify)
    {
        if(magazine[s]>0)
            magazine[s]--;
        else
        {
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";

}
int main()
{
    long int m,n;
    cin>>m>>n;
    string t[m],t2[n];
    vector<string> temp;
    vector<string> verify;
    for(long int i=0;i<m;i++)
    {
        cin>>t[i];
        temp.push_back(t[i]);
    }

    for(long int k=0;k<n;k++)
    {
        cin>>t2[k];
        verify.push_back(t2[k]);
    }

    checkMagazine(temp,verify);
    return 0;
}
