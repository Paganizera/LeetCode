#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string first = "", second = "";

        for (string &stripe: word1)
            first += stripe;
        for (string &stripe: word2)
            second += stripe;
        
        return (first == second);
    }
};
