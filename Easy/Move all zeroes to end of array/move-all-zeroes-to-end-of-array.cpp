//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {   // Brute force - striver
	    int temp[n];
	    int j=0;
	    for(int i=0; i<n; i++){
	        if(arr[i] != 0){
	            temp[j] = arr[i];
	            j++;
	        }
	    }
	    
	    for(int i=0; i<j; i++){
	        arr[i] = temp[i];
	    }
	    
	    while(j<n){
	        arr[j] = 0;
	        j++;
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends