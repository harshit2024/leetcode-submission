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
    
    bool binarySearch(int arr[], int l,int r, int k)
    {
        
        if(l>r){
            return false;
        }
         int mid=l+(r-l)/2;
    
        if(arr[mid]==k){
            return true;
        }
        if(k>arr[mid]){
            return binarySearch(arr,mid+1,r,k);
        }
        else{
            return binarySearch(arr,l,mid-1,k);
        
        }
      
    }
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       if(binarySearch(arr,0,N-1,K)){
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