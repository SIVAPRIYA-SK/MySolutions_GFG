//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int solve (string s, int k) {
    	int n = s.size();
    	long long int ans = 0;
    	int i = 0;
    	int j = 0;
    	int dist_cnt = 0;
    	
    	int hash_cnt[26] = {};
    	
    	while(j < n){
    	    hash_cnt[s[j] - 97]++;
    	    
    	    if(hash_cnt[s[j] - 97] == 1)
    	      dist_cnt++;
    	    
    	    while(dist_cnt > k){
    	        hash_cnt[s[i] - 97]--;
    	        if(hash_cnt[s[i] - 97] == 0)
    	           dist_cnt--;
    	        i++;
    	    }
    	    ans += j-i+1;
    	    j++;
    	}
    	return ans;
    }
    long long int substrCount (string s, int k){
        long long int ans = solve(s, k) - solve(s, k-1);
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends