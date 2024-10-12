//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            set<char> setA(A.begin(), A.end());
            set<char> setB(B.begin(), B.end());

            string result = "";
            for (char ch : setA) {
                if (setB.find(ch) == setB.end()) {
                    result += ch;
                }
            }
            for (char ch : setB) {
                if (setA.find(ch) == setA.end()) {
                    result += ch;
                }
            }

            if (result.empty()) {
                return "-1";
            }
            
            sort(result.begin(),result.end());
            return result;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends