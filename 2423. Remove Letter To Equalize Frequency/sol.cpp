#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> frequency;
        
        int minimun = 100;
        int maximun = 0;
        
        // Populating map
        for (char c: word) {
            frequency[c]++;
        }
        
        // Setting current max and min frequency
        for (auto item: frequency){
            if(minimun > item.second) minimun = item.second;
            if(maximun < item.second) maximun = item.second;
        }
        
        // Checks the case where we have unique char with +1 count
        if (frequency.size() * minimun  == word.length() -1)
            return true;
        
        // Checks if all chars have equal count instead a single unique char with count 1
        if (minimun == 1 && maximun * (frequency.size() - 1) == word.length() -1)
            return true;
        
        // If there is a single character with unique count = 1, all other's count must be zero
        return (frequency.size() == 1);
    }
};
