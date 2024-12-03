Add Binary Strings
Difficulty: MediumAccuracy: 23.25%Submissions: 83K+Points: 4
Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros.

Input: s1 = "1101", s2 = "111"
Output: 10100
Explanation:
 1101
+ 111
10100
Input: s1 = "00100", s2 = "010"
Output: 110
Explanation: 
  100
+  10
  110
Constraints:
1 ≤s1.size(), s2.size()≤ 106


  code :
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string& s1, string& s2) {
        int a = s1.length();
        int b = s2.length();
        int carry = 0;
        int i = 0;
        string ans = "";

        while (i < a || i < b || carry != 0) {
            int x = 0;
            if (i < a && s1[a - i - 1] == '1') {
                x = 1;
            }

            int y = 0;
            if (i < b && s2[b - i - 1] == '1') {
                y = 1;
            }

            ans = to_string((x + y + carry) % 2) + ans;
            carry = (x + y + carry) / 2;
            i++;
        }

        int start = 0;
        while (start < ans.size() && ans[start] == '0') {
            start++;
        }

        return start == ans.size() ? "0" : ans.substr(start);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";
        cout << "~" << "\n";
    }
}
