#include<iostream>
#include<map>
#include<vector>
#include<string.h>
using namespace std;
/*
  Two string are anagrams if and only if for every letter occurring in
  any of them the number of its occurrences is equal in both the strings.
*/
int char_to_int(char c)
{
    return (c-'a');
}
int sherlockAndAnagrams(string s)
{
    /*
        Since there are 26 lower character alphabets. So we will make
        a vector (inside outer loop) and initialized with 26 zeros.

        Then we calculate signature of all the substrings.

        Signature of any string will be a tuple of 26 elements where the
        i-th element denotes the number of occurrences of the i-th letter
        of the alphabet.

        We then add the signatures to the hashmaps "mp" with corresponding
        value equal to total number substrings with same signature
    */
    int N = s.length();
    map<vector<int>, int> mp;

    // Outer loop
    for(int i=0;i<N;i++)
    {
        // i denotes starting index of substrings
        vector<int> freq(26,0);

       /* This loop is used to find signatures of various
           substrings of different lengths starting at index i    */
        for(int j=i;j<N;j++)
        {
            freq[char_to_int(s[j])]++;
            mp[freq]++;  //adding substring to mp
        }
    }

    /* if there are n substrings with same signature, then they can
       form (nc2) i.e n*(n-1)/2 pairs of substrings with same signature
    */
    int result = 0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        int n = it->second;
        result = result + ((n*(n-1))/2);
    }
    return result;
}

int main()
{
    int queries; cin>>queries;
    for(int q=0;q<queries;q++)
    {
        string s;
        cin>>s;
        cout<<sherlockAndAnagrams(s)<<endl;
    }
}
