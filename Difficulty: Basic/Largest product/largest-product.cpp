//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete the function*/
class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        // code here
     int n = arr.size();
        if (n < k) {
            return 0;
        }

        int currentProduct = 1;
        for (int i = 0; i < k; ++i) {
            currentProduct *= arr[i];
        }

        int maxProduct = currentProduct;

        for (int i = k; i < n; ++i) {
            currentProduct = currentProduct / arr[i - k] * arr[i];
            maxProduct = max(maxProduct, currentProduct);
        }

        return maxProduct;
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
        int res = obj.findMaxProduct(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends