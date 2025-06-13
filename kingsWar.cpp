"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/kings-war2448/1

You are given an array arr[] where each element arr[i] represents the power of the i-th enemy. You can only defeat 
enemies with the highest and lowest power, and each soldier can defeat only one enemy. Your task is to calculate the 
number of soldiers required.

Note: The array may contain duplicate values.
"""


class Solution {
  public:
    int findRequiredSoldiers(vector<int>& arr) {
        // if arr is 2 elements or less, king can defeat all the enemies
        if (arr.size() <= 2) {
            return 0;
        }
        // sort arr to be in ascending order
        sort(arr.begin(), arr.end());
        // set value that will be returned later, being 2 less than arr's element count by default 
        int return_val = arr.size() - 2;
        // iterate through all elements in arr
        for (int i = 1; i < arr.size() - 1; i++) {
            // if an enemy is the same strength as the most or least powerful enemy, it's for the king
            if (arr[i] == arr[0] || arr[i] == arr[arr.size() - 1]) {
                // subtract 1 from return_val, as arr[i] will be for the king
                return_val--;
            }
        }
        // return the finalized return_val
        return return_val;
    }
};