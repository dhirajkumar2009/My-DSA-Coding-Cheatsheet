/*Find duplicates in an array

Given an array arr of size n which contains elements in range from 0 to n-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 

Note: Try and perform all operations within the provided array. The extra (non-constant) ) space needs to be used only for the array to be returned.

Examples:

Input: arr[] = {0,3,1,2}, n = 4
Output: -1
Explanation: There is no repeating element in the array. Therefore output is -1.
Input: arr[] = {2,3,1,2,3}, n = 5
Output: 2 3 
Explanation: 2 and 3 occur more than once in the given array.
Your Task:
Complete the function duplicates() which takes array arr[] and n as input as parameters and returns a list of elements that occur more than once in the given array in a sorted manner. 

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
0 <= arr[i] <= n-1, for each valid i
1 <= n <= 105
*/
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int>b(n+1);
        vector<int>result;
        for(int i=0;i<n;i++){
            b[arr[i]]++;
        }
        for(int i=0;i<=n;i++){
            if(b[i]>1){
                result.push_back(i);
            }
        }
        if(result.empty()){
            result.push_back(-1);
        }
        return result;
    }
};

