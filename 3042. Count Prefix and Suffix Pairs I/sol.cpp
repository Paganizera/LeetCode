#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int countPrefixSuffixPairs(vector<string>& words) {
            int amount =  words.size();
            int answer = 0;

            for (int i = 0; i < amount - 1 ; i++) {
                string str1 = words[i];
                int size = str1.length();
                for (int j = i + 1; j < amount; j++) {
                    string str2 = words[j];

                    if (str1.length() > str2.length()) continue;

                    string prefix = str2.substr(0, size);
                    string suffix = str2.substr(str2.length() - size);

                    if (str1 == prefix && str1 == suffix) {
                        answer++;
                    }
                }
            }
            return answer;
        }
};
