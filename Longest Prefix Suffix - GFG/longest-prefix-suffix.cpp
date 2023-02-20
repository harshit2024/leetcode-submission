//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	 
	 vector<int>lps(s.size(),0);
	 
	 for(int i=1;i<s.size();i++){
	     int j=lps[i-1];
	     
	     while(j>0&&s[i]!=s[j]){
	         j=lps[j-1];
	     }
	     if(s[i]==s[j]){
	         j++;
	     }
	     lps[i]=j;
	 }
	 int maxi=INT_MIN;
	 for(int i=0;i<lps.size();i++){
	     maxi=max(maxi,lps[i]);
	 }
	  return   lps[s.size()-1];
	  
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends