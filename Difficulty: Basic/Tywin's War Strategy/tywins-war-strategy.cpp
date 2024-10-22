//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here.
        
        int n = arr.size();
        int currentLuckyCount = 0;
        
        
        for (int soldiers : arr) {
            if (soldiers % k == 0) {
                currentLuckyCount++;
            }
        }
        
        
        int requiredLuckyCount = (n + 1) / 2;
        if (currentLuckyCount >= requiredLuckyCount) {
            return 0;
        }
        
        
        vector<int> additionalSoldiersNeeded;
        for (int soldiers : arr) {
            if (soldiers % k != 0) {
                int remainder = soldiers % k;
                int needed = k - remainder;
                additionalSoldiersNeeded.push_back(needed);
            }
        }
        
        sort(additionalSoldiersNeeded.begin(), additionalSoldiersNeeded.end());
        
        int soldiersToTrain = 0;
        for (int i = 0; i < requiredLuckyCount - currentLuckyCount; ++i) {
            soldiersToTrain += additionalSoldiersNeeded[i];
        }
        
        return soldiersToTrain;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;     // Number of test cases
    cin.ignore(); // Consume the newline character

    while (t--) {
        vector<int> arr;
        int num;

        // Read input until newline for the array
        string line;
        getline(cin, line);
        stringstream ss(line);
        while (ss >> num) {
            arr.push_back(num);
        }

        int k;
        cin >> k;
        cin.ignore(); // Consume the newline character after reading k

        Solution obj;
        cout << obj.minSoldiers(arr, k) << endl;
    }

    return 0;
}

// } Driver Code Ends