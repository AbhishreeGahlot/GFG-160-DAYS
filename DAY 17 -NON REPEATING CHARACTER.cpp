Non Repeating Character
Difficulty: EasyAccuracy: 40.43%Submissions: 241K+Points: 2
Given a string s consisting of lowercase Latin Letters. Return the first non-repeating character in s. If there is no non-repeating character, return '$'.
Note: When you return '$' driver code will output -1.

Examples:

Input: s = "geeksforgeeks"
Output: 'f'
Explanation: In the given string, 'f' is the first character in the string which does not repeat.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
 char nonRepeatingChar(string &s) {
    int freq[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i] - 'a'] == 1) {
            return s[i];
        }
    }

    return '$';

      
      
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
