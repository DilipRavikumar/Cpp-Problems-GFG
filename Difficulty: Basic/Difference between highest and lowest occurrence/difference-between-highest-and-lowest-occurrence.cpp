//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int, int> frequency;

        for (int num : arr) {
            frequency[num]++;
        }

        if (frequency.size() == 1) {
            return 0;
        }

        
        int minCount = INT_MAX;
        int maxCount = INT_MIN;

        
        for (const auto& entry : frequency) {
            minCount = min(minCount, entry.second);
            maxCount = max(maxCount, entry.second);
        }

        return maxCount - minCount;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findDiff(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends