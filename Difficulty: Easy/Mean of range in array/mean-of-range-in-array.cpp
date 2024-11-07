//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findMean(vector<int>& arr, vector<int>& q) {
        // Complete the function
 int n = arr.size();
        
        // Step 1: Create the prefix sum array
        vector<int> prefix(n + 1, 0); // prefix[i] will hold sum of arr[0] to arr[i-1]
        
        // Fill prefix sum array
        for (int i = 1; i <= n; ++i) {
            prefix[i] = prefix[i - 1] + arr[i - 1];
        }
        
        // Step 2: Process each query
        vector<int> result;
        int q_size = q.size();
        
        for (int i = 0; i < q_size; i += 2) {
            int l = q[i];
            int r = q[i + 1];
            
            // Calculate sum of elements from arr[l] to arr[r] using prefix sum
            int sum = prefix[r + 1] - prefix[l];
            
            // Number of elements in the range
            int count = r - l + 1;
            
            // Floor of mean
            int mean = sum / count;
            
            // Add result to the result vector
            result.push_back(mean);
        }
        
        return result;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr, q;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            q.push_back(number2);
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.findMean(arr, q);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
        cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends