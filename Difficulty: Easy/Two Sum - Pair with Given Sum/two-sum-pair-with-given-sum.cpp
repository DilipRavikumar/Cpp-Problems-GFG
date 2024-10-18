//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool twoSum(std::vector<int>& arr, int target) {
        std::unordered_set<int> seen; 
        
        for (int num : arr) {
            int complement = target - num; 
            
            if (seen.find(complement) != seen.end()) {
                return true; 
            }
            
            seen.insert(num);
        }
        
        return false; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        int x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends