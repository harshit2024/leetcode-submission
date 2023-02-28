//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

vector<int> computelpsArray(string str){
    int m=str.length();
    vector<int>lps(m);
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<m){
        if(str[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
                
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}
    int minChar(string str){
        //Write your code here
       string rev=str;
       reverse(rev.begin(),rev.end());
       string c=str+"$"+rev;
       
       vector<int>lps=computelpsArray(c);
       
       int ans=str.length()-lps.back();
       return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends