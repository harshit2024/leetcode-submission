//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
  unordered_map<int,int>mp;
  for(int i=1;i<=N;i++){
      mp[A[i-1]]++;
  }
  int ans=-1;
  for(int i=1;i<=N;i++){
      if(mp[i]==0){
          ans=i;
      }
  }
  return ans;
}