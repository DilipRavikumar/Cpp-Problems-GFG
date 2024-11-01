//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int lastX = -1; 
        int lastY = -1;
        int minDistance = INT_MAX; 
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                lastX = i; 
                if (lastY != -1) {
                    minDistance = min(minDistance, abs(lastX - lastY));
                }
            } 
            else if (a[i] == y) {
                lastY = i; 
                if (lastX != -1) {
                    minDistance = min(minDistance, abs(lastX - lastY));
                }
            }
        }

        return (minDistance == INT_MAX) ? -1 : minDistance;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends