//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minDiff(vector<int>& arr) {
        // code here
    sort(arr.begin(), arr.end());

        int min_diff = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            int diff = arr[i] - arr[i - 1];
            if (diff < min_diff) {
                min_diff = diff; 
            }
        }

        return min_diff;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.minDiff(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends