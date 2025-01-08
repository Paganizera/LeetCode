#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int> &nums, int k) {
        bitset<20> bits;
        bits = bitset<20>(k);
        for (int &i: nums) {
            bits ^= bitset<20>(i);
        }
        return bits.count();
    }
};
