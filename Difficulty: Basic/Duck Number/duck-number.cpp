//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 
bool check_duck(string N);
 
int main(void)
{
    int t; 
    cin>>t;
    while(t--)
    {
        string N; 
        cin>>N; 
  
        if (check_duck(N)) 
            cout << "YES\n"; 
        else
            cout << "NO\n"; 
     
    
cout << "~" << "\n";
}
}
// } Driver Code Ends


bool check_duck(string N){
    //code
 if (N[0] == '0') {
        return false; 
    }
    for (char c : N) {
        if (c == '0') {
            return true; 
        }
    }
    return false;
}