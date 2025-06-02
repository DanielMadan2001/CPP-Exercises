"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/peak-element/1

Given an array arr[] where no two adjacent elements are same, find the index of a peak element. An element is considered 
to be a peak if it is greater than its adjacent elements (if they exist). If there are multiple peak elements, return 
index of any one of them. The output will be "true" if the index returned by your function is correct; otherwise, it 
will be "false".

Note: Consider the element before the first element and the element after the last element to be negative infinity.
"""


class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // iterate through every element in arr
        for (int i = 0; i < arr.size(); i++) {
            // find the element left of a[i]
            int left = arr[i - 1];
            // if a[i] is the leftmost element, make left less than a[i]
            if (i == 0) {
                left = arr[i] - 1;
            }
            // find the element right of a[i]
            int right = arr[i + 1];
            // if a[i] is the rightmost element, make right less than a[i]
            if (i == (arr.size() - 1)) {
                right = arr[i] - 1;
            }
            // if left and right are both less than a[i], it is a peak element and is returned
            if (arr[i] > left && arr[i] > right) {
                return i;
            }
        }
    }
};