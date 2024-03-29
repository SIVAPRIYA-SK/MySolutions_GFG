//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {    // ---> Variable sized sliding window
        unordered_map<char, int> mp;
        int i=0, j=0;
        int n = s.length();
        int max1 = INT_MIN;
        while(j < n){
            mp[s[j]]++;
            if(mp.size() < k){            // Condition - 1
               j++;
            }
            else if(mp.size() == k){      // Condition - 2
               max1 = max(max1, j-i+1);
               j++;
            }
            else if(mp.size() > k){       // Condition - 3
                while(mp.size() > k){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                       mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return max1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends