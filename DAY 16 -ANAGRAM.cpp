Anagram
Difficulty: EasyAccuracy: 44.93%Submissions: 361K+Points: 2
Given two strings s1 and s2 consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other. Strings s1 and s2 can only contain lowercase alphabets.

Note: You can assume both the strings s1 & s2 are non-empty.

Examples :

Input: s1 = "geeks", s2 = "kseeg"
Output: true
Explanation: Both the string have same characters with same frequency. So, they are anagrams.
  //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        
        if(s1.length()!=s2.length())
        {
            return false;
        }
        
        int freq[26]={0};
        
        for(int i =0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            freq[index]++;
        } 
         for(int i =0;i<s2.length();i++)
        {
            int index=s2[i]-'a';
            freq[index]--;
        }
        for (int i=0;i<26;i++)
        {
        if (freq[i] != 0) {
            return false;  
        }
        }

    return true;  
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends