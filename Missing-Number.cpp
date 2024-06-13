/*
Missing Number:-
 
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums){
        int max=0;
       for(int i=0;i<nums.size();i++){
     if(nums[i]>max){
         max=nums[i];
     }
       }
        int n=max;
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1=sum1+nums[i];
        }
        sum2=(n*(n+1))/2;
        int diff=sum2-sum1;
        if((max+1)==nums.size()){
            return (max+1);
        }
           return diff;
    }
};
