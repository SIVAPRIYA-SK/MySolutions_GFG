//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

    int lowerBound(int nums[], int n, int x){
        int low = 0, high = n-1;
        int ans1 = n;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] >= x){
                ans1 = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans1;
    }
    int upperBound(int nums[], int n, int x){
        int low = 0, high = n-1;
        int ans2 = n;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] > x){
                ans2 = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans2;
    }
vector<int> find(int arr[], int n , int x )
{
        int lb = lowerBound(arr, n, x);
        if(lb == n || arr[lb] != x) return {-1,-1};
        int ub = upperBound(arr, n, x) - 1;
        vector<int> res;
        res.push_back(lb); 
        res.push_back(ub);
        return res;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends