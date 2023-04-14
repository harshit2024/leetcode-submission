//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code hereb 
   vector<int>ans;
   int l=0;
   int r=n-1;
   int i=0;
   
  while(l<=r){
      int mid=(l+r)/2;
      if(arr[mid]<x){
          l=mid+1;
      }
      else if(arr[mid]>x){
          r=mid-1;
      }
      else {
          i=mid;
          while(arr[i]==x){
              i--;
          }
          
          ans.push_back(i+1);
          i=mid;
           while(arr[i]==x){
              i++;
          }
          ans.push_back(i-1);
          return ans;
      }
  }
  ans.push_back(-1);
  ans.push_back(-1);
  return ans;
    
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