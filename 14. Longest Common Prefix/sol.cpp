#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    string longestCommonPrefix(vector<string>& strs) {
        // No strings mean no common prefix
        if (strs.empty()) return "";

        // We don't need sorting if we want the largest common prefix        
        string pre = strs[0];

        // Iterating through all list
        for (int i = 1; i < strs.size(); i++) {
            // If the position where the string starts is 0, then it's 
            // what we want
            while (strs[i].find(pre) != 0) {
                // If we have the substring inside, and it's not a prefix, we reduce it's size
                pre = pre.substr(0, pre.size() - 1);
                // No commmon starting char means no prefix
                if (pre.empty()) return "";
            }
        }
        return pre;
    }
};
