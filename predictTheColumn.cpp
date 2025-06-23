"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/predict-the-column/1

Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is to find the column with maximum number
of 0s. If more than one column exists, print the one which comes first. If the maximum number of 0s is 0 then return -1.
"""


class Solution {
    public:
        /*Function to count zeros in each column
        * N : Number of rows and columns in array
        M is the matrix that is globally declared
        */
        int columnWithMaxZeros(vector<vector<int>> arr, int N) {
            // the current highest number of zeroes in a column
            int max_num = 0;
            // the column index with the highest number of zeroes, -1 by default
            int return_val = -1;
            // the array which will contain the zero counts for each column
            int columns[N] = {0};
            // iterate through every subarray in arr
            for (int i = 0; i < arr.size(); i++) {
                // iterate through every element in arr[i]
                for (int j = 0; j < arr[i].size(); j++) {
                    // if arr[i][j] is a zero, increase the zero count for the jth column
                    if (arr[i][j] == 0) {
                        columns[j] += 1;
                    }
                }
            }
            // iterate N times, which is the number of entries in columns
            for (int i = 0; i < N; i++) {
                // if current dictionary entry is greater than max_num, i is the new top column
                if (columns[i] > max_num) {
                    max_num = columns[i];
                    return_val = i;
                }
            }
            // return the final value, will be -1 if no column has had a zero in it
            return return_val;
        }
};