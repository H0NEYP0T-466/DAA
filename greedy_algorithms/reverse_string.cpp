	//{ Driver Code Starts
#include <bits/stdc++.h>
#include<iostream>
using namespace std;


// } Driver Code Ends

class Solution {
    
  public:
  string reverseWords(string &s) {
        // code here
          string ans;
            string temp;
        
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=' ';
                temp.clear();
                
            }
            else
            {
                temp+=s[i];
            }
        }
         reverse(temp.begin(),temp.end());
                ans+=temp;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
	Solution obj;
	string sa=" my name is faizan ";
	string x;

	x=obj.reverseWords(sa);
	cout<<x;

    return 0; // Return 0 to indicate successful execution
}

// } Driver Code Ends
