//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
int invCount = 0;
        int n = arr.size();

        // Merge sort and count inversions
        std::function<void(int, int)> mergeSortAndCount = [&](int left, int right) {
            if (left < right) {
                int mid = (left + right) / 2;

                mergeSortAndCount(left, mid);
                mergeSortAndCount(mid + 1, right);

                // Merge the two halves and count inversions
                int n1 = mid - left + 1;
                int n2 = right - mid;

                std::vector<int> L(n1), R(n2);

                for (int i = 0; i < n1; i++)
                    L[i] = arr[left + i];
                for (int j = 0; j < n2; j++)
                    R[j] = arr[mid + 1 + j];

                int i = 0, j = 0, k = left;

                while (i < n1 && j < n2) {
                    if (L[i] <= R[j]) {
                        arr[k++] = L[i++];
                    } else {
                        arr[k++] = R[j++];
                        invCount += (n1 - i); // Count inversions
                    }
                }

                while (i < n1) {
                    arr[k++] = L[i++];
                }

                while (j < n2) {
                    arr[k++] = R[j++];
                }
            }
        };

        mergeSortAndCount(0, n - 1);
        return invCount;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends