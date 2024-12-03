Majority Element II
Difficulty: MediumAccuracy: 48.1%Submissions: 102K+Points: 4
You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 

Note: The answer should be returned in an increasing format.

Examples:

Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
Output: [5, 6]
Explanation: 5 and 6 occur more n/3 times.
Input: arr[] = [1, 2, 3, 4, 5]
Output: []
Explanation: no candidate occur more than n/3 times.
Constraint:
1 <= arr.size() <= 106
-109 <= arr[i] <= 109

:code ->
  //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
public:

    vector<int> findMajority(vector<int>& arr) {
        vector<int> array;     
        int n = arr.size();    
        
        sort(arr.begin(), arr.end()); 
        
        int count = 1;         

        
        for (int i = 1; i < n; i++) {
            
            if (arr[i] == arr[i - 1]) {
                count++;       
            } else {
                
                if (count > n / 3) {
                    array.push_back(arr[i - 1]); 
                }
                count = 1;     //reset
            }
        }

     //last eleemwtn xheck
        if (count > n / 3) { 
            array.push_back(arr[n - 1]);
        }

        return array; 
    }
};








































//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

