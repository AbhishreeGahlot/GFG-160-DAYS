Rotate Array
Difficulty: MediumAccuracy: 37.06%Submissions: 374K+Points: 4
Given an unsorted array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

Note: Consider the array as circular.

Examples :

Input: arr[] = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
Explanation: when rotated by 3 elements, it becomes 8 10 12 14 16 18 20 2 4 6.
Input: arr[] = [7, 3, 9, 1], d = 9
Output: [3, 9, 1, 7]
Explanation: when we rotate 9 times, we'll get 3 9 1 7 as resultant array.
Constraints:
1 <= arr.size(), d <= 105
0 <= arr[i] <= 105//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        
        // Handle cases where d >= n or d == 0
        d = d % n;
        if (d == 0) return;
        
        // Rotate the array by reversing parts
        reverse(arr.begin(), arr.begin() + d); // Reverse the first d elements
        reverse(arr.begin() + d, arr.end());  // Reverse the rest of the array
        reverse(arr.begin(), arr.end());      // Reverse the entire array
    }
};










//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d);

        // printing the elements of the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends


without any inbuilt function:
//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(int arr[], int n, int d) {
        // Adjust d to ensure it's within bounds
        d = d % n;
        if (d == 0) return;

        // Reverse the first d elements manually
        reverseArray(arr, 0, d - 1);

        // Reverse the remaining n-d elements manually
        reverseArray(arr, d, n - 1);

        // Reverse the entire array manually
        reverseArray(arr, 0, n - 1);
    }

private:
    // Function to reverse an array from index `start` to `end`
    void reverseArray(int arr[], int start, int end) {
        while (start < end) {
            // Swap the elements at `start` and `end`
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            // Move the pointers towards the center
            start++;
            end--;
        }
    }
};

