//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    
    bool binarySearch(int arr[], int N, int k)
    {
        int l=0;
        int r=N-1;
        int mid=(l+r)/2;
        
        while(l<=r){
            
            if(k==arr[mid])
            {
                return true;
            }
            else if(k>arr[mid]){
                l=mid+1;
                
            }
            else{
                r=mid-1;
            }
            mid=(l+r)/2;
        }
        return false;
    }
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       if(binarySearch(arr,N,K)){
           return 1;
       }
       return -1;
       
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends