//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {

 if (n == 0)
            return {};

        vector<long long> fib(n);

        if (n >= 1) fib[0] = 1; 
        if (n >= 2) fib[1] = 1;  
        for (int i = 2; i < n; ++i)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        return fib;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends