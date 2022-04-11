/*
Given a list of words followed by two words, the task to find the minimum distance between the given two words in the list of words
Example 1:
Input:
S = { "the", "quick", "brown", "fox", 
     "quick"}
word1 = "the"
word2 = "fox"
Output: 3
Explanation: Minimum distance between the 
words "the" and "fox" is 3
*/

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:	
	
int shortestDistance(vector<string> &s, string word1, string word2)
	{
		unordered_map<string, vector<int>> mp;
		for(int i =0;i<s.size();i++) {
		    mp[s[i]].push_back(i);
		}
		
		int ans = INT_MAX;
		for(auto i : mp[word1]) {
		    for(auto j : mp[word2]) {
		        ans = min(ans, abs(i-j));
		    }
		}
		return ans;
	}

};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}  
© 2022 GitHub, Inc.
