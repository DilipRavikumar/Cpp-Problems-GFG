//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if (str1.length() != str2.length()) {
            return false;
        }
        
       vector<int> mappingStr1ToStr2(256, -1);
    vector<int> mappingStr2ToStr1(256, -1);
        
        for (size_t i = 0; i < str1.length(); i++) {
            char char1 = str1[i];
            char char2 = str2[i];
            
            if (mappingStr1ToStr2[char1] == -1 && mappingStr2ToStr1[char2] == -1) {
                mappingStr1ToStr2[char1] = char2;
                mappingStr2ToStr1[char2] = char1;
            } else {
                if (mappingStr1ToStr2[char1] != char2 || mappingStr2ToStr1[char2] != char1) {
                    return false;
                }
            }
        }
        
        return true;
    }
};


//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends