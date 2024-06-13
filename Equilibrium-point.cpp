/*
Equilibrium Point

Given an array A of n non negative numbers. The task is to find the first equilibrium point in an array. Equilibrium point in an array is an index (or position) such that the sum of all elements before that index is same as sum of elements after it.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 
3 
Explanation:  
equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 
Example 2:

Input:
n = 1
A[] = {1}
Output: 
1
Explanation:
Since there's only element hence its only the equilibrium point.
Your Task:
The task is to complete the function equilibriumPoint() which takes the array and n as input parameters and returns the point of equilibrium. 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 105
0 <= A[i] <= 109


*/

class Solution{
    public:

    int equilibriumPoint(long long a[], int n) {
    
        int res=0,left=0,right=0;
        for(int i=0;i<n;i++){
            res=res+a[i];
        }
        for(int i=0;i<n;i++){
            right=res-left-a[i];
            if(left==right){
                return i+1;
            }else{
                left=left+a[i];
            }
            
        }
        return -1;
    }

};
