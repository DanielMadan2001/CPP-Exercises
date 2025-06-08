"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/find-repetitive-element-from-1-to-n-1/1

Given an array arr[] of size n, filled with numbers from 1 to n-1 in random order. The array has only one repetitive 
element. Your task is to find the repetitive element.

Note: It is guaranteed that there is a repeating element present in the array.
"""


class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // sort arr to be in ascending order
        sort(arr.begin(), arr.end());
        // iterate through each element in arr
        for (int i = 0; i < arr.size() - 1; i++) {
            // if current element is the same as its successor, one is the repetitive element and is returned
            if (arr[i] == arr[i + 1]) {
                return arr[i];
            }
        }
        return 0;
    }
};