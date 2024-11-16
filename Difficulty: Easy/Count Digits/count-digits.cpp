//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
 int count = 0;
        int originalNumber = n;  // Store the original number for divisibility check
        
        // Iterate over each digit of n
        while (n > 0) {
            int digit = n % 10;  // Get the last digit of n
            n /= 10;  // Remove the last digit
            
            // Skip division by 0 to avoid divide by zero error
            if (digit != 0 && originalNumber % digit == 0) {
                count++;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends