//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int countSubstringWithEqualEnds(string s)
	{
    int n = s.length();
    vector<int> freq(26, 0);  // To store the frequency of each character
    int result = 0;
    
    // Traverse through the string and count substrings for each character
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;  // Increment the frequency of the character
    }
    
    // For each character, calculate the number of substrings
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            // The number of substrings for this character is f * (f + 1) / 2
            result += (freq[i] * (freq[i] + 1)) / 2;
        }
    }
    
    return result;
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

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends