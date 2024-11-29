Add Binary Strings
Difficulty: MediumAccuracy: 23.25%Submissions: 67K+Points: 4
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





class Solution {
public:
    string addBinary(string& s1, string& s2) {
        int a = s1.length();  // Length of the first binary string
        int b = s2.length();  // Length of the second binary string
        int carry = 0;        // Carry initialized to 0
        int i = 0;            // Index for processing from the end of strings
        string ans = "";      // Resultant binary string

        // Loop until both strings and carry are processed
        while (i < a || i < b || carry != 0) {
            int x = 0;
            // Check and retrieve bit from s1
            if (i < a && s1[a - i - 1] == '1') {
                x = 1;
            }

            int y = 0;
            // Check and retrieve bit from s2
            if (i < b && s2[b - i - 1] == '1') {
                y = 1;
            }

            // Add the bits and carry, calculate the current bit and new carry
            ans = to_string((x + y + carry) % 2) + ans; // Append bit to the result
            carry = (x + y + carry) / 2;               // Update carry
            i++;                                       // Move to the next bit
        }

        
        // Remove leading zeros from the result
        int start = 0;
        while (start < ans.size() && ans[start] == '0') {
            start++;
        }

        // Return the result or "0" if all digits are removed
        return start == ans.size() ? "0" : ans.substr(start);
    }
};
