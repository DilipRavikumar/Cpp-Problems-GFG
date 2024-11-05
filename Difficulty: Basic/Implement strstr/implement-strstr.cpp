//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
 int sLength = s.length();
    int xLength = x.length();
    
    if (xLength == 0) {
        return 0;
    }
    
    for (int i = 0; i <= sLength - xLength; i++) {
        int j;
        for (j = 0; j < xLength; j++) {
            if (s[i + j] != x[j]) {
                break;
            }
        }
        if (j == xLength) {
            return i;
        }
    }
    
    return -1;
}