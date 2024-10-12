//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string n)
    {
        //Your code here
        int remainder = 0;
    
    // Iterate through each character of the string
    for (char digit : n) {
        // Update the remainder for the current digit
        remainder = (remainder * 10 + (digit - '0')) % 7;
    }
    
    return remainder;
}
    
};

//{ Driver Code Starts.
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    Solution ob;
    cout<<ob.remainderWith7(n)<<endl;
    
    }
	return 0;
}
// } Driver Code Ends