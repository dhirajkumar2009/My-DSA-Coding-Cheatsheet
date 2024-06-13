/*
Remove duplicate elements from sorted Array


Given a sorted array a[] of size n, delete all the duplicated elements from a[] & modify the array such that only distinct elements should be present there.

Note:
1. Don't use set or HashMap to solve the problem.
2. You must return the modified array size where only distinct elements are present in the array, the driver code will print all the elements of the modified array.

Example 1:

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 
1
Explanation: After removing all the duplicates only one instance of 2 will remain i.e. {2} so modify array will contains 2 at first position and you should return 1 after modify the array.
Example 2:

Input:
N = 4
Array = {1, 2, 2, 4}
Output: 3
Explation: After removing all duplicates modify array will contains {1, 2, 4} at first 3 positions so you should return 3 after modify the array.

Your Task:  
You don't need to read input or print anything. Complete the function remove_duplicate() which takes the array a[] and its size n as input parameters and modifies it in place to delete all the duplicates. The function must return an integer X denoting the no. of distinct elements in the array keeping the first X elements of an array in increasing order. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

class Solution{
public:
    int remove_duplicate(int a[],int n){
         int i=0;
         for(int j=1;j<n;j++){
             if(a[i]!=a[j]){
                 a[i+1]=a[j];
                 i++;
             }
         }
         return (i+1);
    }
};
