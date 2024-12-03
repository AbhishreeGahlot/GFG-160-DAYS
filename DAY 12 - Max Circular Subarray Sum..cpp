Max Circular Subarray Sum
Difficulty: HardAccuracy: 29.37%Submissions: 121K+Points: 8
Given an array of integers arr[] in a circular fashion. Find the maximum subarray sum that we can get if we assume the array to be circular.

Examples:

Input: arr[] = [8, -8, 9, -9, 10, -11, 12]
Output: 22
Explanation: Starting from the last element of the array, i.e, 12, and moving in a circular fashion, we have max subarray as 12, 8, -8, 9, -9, 10, which gives maximum sum as 22.
Input: arr[] = [10, -3, -4, 7, 6, 5, -4, -1]
Output: 23
Explanation: Maximum sum of the circular subarray is 23. The subarray is [7, 6, 5, -4, -1, 10].
Input: arr[] = [-1, 40, -14, 7, 6, 5, -4, -1] 
Output: 52
Explanation: Circular Subarray [7, 6, 5, -4, -1, -1, 40] has the maximum sum, which is 52.
Constraints:
1 <= arr.size() <= 105
-104 <= arr[i] <= 104











class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
          int n = arr.size();
        
        int max_kadane = kadane(arr);
        
        int total_sum = 0, min_sum = INT_MAX, curr_min = 0;
        for (int i = 0; i < n; i++) {
            total_sum += arr[i];
            
            curr_min = min(curr_min + arr[i], arr[i]);
            min_sum = min(min_sum, curr_min);
        }
        
        int max_circular = total_sum - min_sum;
        

        if (max_circular <= 0) return max_kadane;
        
        return max(max_kadane, max_circular);
    }
    int kadane(vector<int> &arr) {
        int max_sum = INT_MIN, curr_max = 0;
        for (int i = 0; i < arr.size(); i++) {
            curr_max = max(curr_max + arr[i], arr[i]);
            max_sum = max(max_sum, curr_max);
        }
        return max_sum;
    }
};
