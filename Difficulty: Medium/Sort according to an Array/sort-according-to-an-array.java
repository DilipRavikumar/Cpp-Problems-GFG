//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

import java.util.HashMap; 
import java.util.Map; 
import java.util.Map.Entry; 


// } Driver Code Ends
//User function Template for Java

class Solution{
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    public static int[] sortA1ByA2(int A1[], int N, int A2[], int M)
    {
        // Step 1: Store frequencies of A1 elements in a HashMap
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int num : A1) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        int index = 0;
        int[] result = new int[N];

        // Step 2: Place elements in the order of A2
        for (int num : A2) {
            if (map.containsKey(num)) {
                int count = map.get(num);
                while (count-- > 0) {
                    result[index++] = num;
                }
                map.remove(num);
            }
        }

        // Step 3: Store remaining elements in a sorted list
        List<Integer> remaining = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            int count = entry.getValue();
            while (count-- > 0) {
                remaining.add(entry.getKey());
            }
        }

        // Sort and append the remaining elements
        Collections.sort(remaining);
        for (int num : remaining) {
            result[index++] = num;
        }

        return result;
    }
}




//{ Driver Code Starts.
class Main {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int t=sc.nextInt();
		
		while(t-->0)
		{
		    int n=sc.nextInt();
		    int m=sc.nextInt();
		    int a1[]=new int[n];
		    int a2[]=new int[m];
		    
		    for(int i=0;i<n;i++)
		    a1[i]=sc.nextInt();
		    
		    for(int i=0;i<m;i++)
		    a2[i]=sc.nextInt();
		    Solution ob=new Solution();
		    a1 = ob.sortA1ByA2(a1,n,a2,m);
		    for(int x:a1)
		    System.out.print(x+" ");
		    
		    System.out.println();
		
System.out.println("~");
}
	}
	

}



// } Driver Code Ends