"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1

Given an array arr, write a program segregating even and odd numbers. The program should put all even numbers first in 
sorted order, and then odd numbers in sorted order.

Note:- You don't have to return the array, you have to modify it in-place.
"""


class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // sort arr so evens and odds are found in ascending order
        sort(arr.begin(), arr.end());
        // the arrays that are used to separate the evens and odds
        vector<int> evens = {};
        vector<int> odds = {};
        // iterate through all elements in arr
        for (int i = 0; i < arr.size(); i++) {
            // if arr[i] is odd, add it to odds
            if (arr[i] % 2) {
                odds.push_back(arr[i]);
            }
            // otherwise, add it to evens
            else {
                evens.push_back(arr[i]);
            }
        }
        // replace arr with evens
        arr = evens;
        // add elements of odds to arr (which now contains all elements of evens)
        arr.insert(arr.end(), odds.begin(), odds.end());
    }
};