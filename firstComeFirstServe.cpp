"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/first-come-first-serve1328/1

You are given an array arr[], containing the IDs of users in chronological order of their occurrences. Find the first user 
who has exactly k occurrences.
If no such user exists, return -1.
"""


class Solution {
  public:
    int firstElement(vector<int>& arr, int k) {
        // map where all data collected from arr will be kept
        unordered_map<int, int> data;
        // iterate through every element in arr
        for (int i = 0; i < arr.size(); i++) {
            // increase the map value for arr[i] by 1
            data[arr[i]]++;
        }
        // iterate through every element in arr
        for (int i = 0; i < arr.size(); i++) {
            // if map value for arr[i] has a value equal to k, return it
            if (data[arr[i]] == k) {
                return arr[i];
            }
        }
        // no elements appear exactly k times, return -1
        return -1;
    }
};