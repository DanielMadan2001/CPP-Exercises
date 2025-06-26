"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/index-of-an-extra-element/1

You have given two sorted arrays arr1[] & arr2[] of distinct elements. The first array has one element extra added in 
between. Return the index of the extra element.

Note: 0-based indexing is followed.
"""


class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // iterate through all elements in a
        for (int i = 0; i < a.size(); i++) {
            // if the ith element of a and b are different, it is the extra element
            if (a[i] != b[i]) {
                return i;
            }
        }
        // if extra element has not been found, it is the final element of a
        return a.size();
    }
};