"""
GeeksforGeeks exercise
https://www.geeksforgeeks.org/problems/buildings-receiving-sunlight3032/1

Given the array arr[] of heights of certain buildings that lie adjacent to each other, Sunlight starts falling from the 
left side of the buildings. If there is a building of a certain height, all the buildings to the right side of it having 
lesser heights cannot see the sun. The task is to find the total number of buildings that receive sunlight.
"""


class Solution {
  public:
    int longest(vector<int>& arr) {
        // the number of buildings that will end up receiving sulight
        int return_val = 0;
        // the current minimum height a building must be to receive sunlight
        int current_min = 0;
        // iterate through all elements of arr
        for (int i = 0; i < arr.size(); i++) {
            // if arr[i] is the first value or equal/greater than the minimum height, it will receive sunlight
            if (return_val == 0 || arr[i] >= current_min) {
                return_val++;
                // increase the minimum height to account for height of current arr element
                current_min = arr[i];
            }
        }
        // return number of valid buildings
        return return_val;
    }
};