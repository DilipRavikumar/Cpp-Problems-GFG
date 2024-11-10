//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to count the number of walls that need to be reduced.
class Solution {
  public:
    int reducingWalls(vector<int>& arr, int k) {
        // your code
int total_operations = 0;
        
        for (int x : arr) {
            if (x > k) {
                total_operations += (x - k + k - 1) / k;
            }
        }
        
        return total_operations;
    }
};  

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.reducingWalls(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends