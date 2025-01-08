#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int> &deck) {
        queue<int> idx; 
        for (int i = 0; i < deck.size(); i++) {
            idx.push(i);
        }
        sort(deck.begin(), deck.end());

        vector<int> v(deck.size());
        for (int c: deck) {
            v[idx.front()] = c;
            idx.pop();
            if (!idx.empty()) {
                idx.push(idx.front());
                idx.pop();
            }
        }
        return v;
    }
};
