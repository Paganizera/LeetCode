#include <bits/stdc++.h>
using namespace std;

class Solution {
    public boolean isNStraightHand(int[] hand, int groupSize) {
        // Their size doesn't match
        if (hand.length % groupSize != 0) return false;

        // This is important for practicity
        Arrays.sort(hand);

        //If I can't make a group, it's false
        for (int i = 0; i < hand.length; i++) {
            if (hand[i] != -99){
                if(!isGroupMakeable(hand, groupSize, i)) return false;
            }
        }
        return true;
    }
    
    public boolean isGroupMakeable(int[] hand, int groupSize, int currIndex) {
        // Setting our local variables
        int next = hand[currIndex] + 1;
        hand[currIndex++] = -99;
        int currGroupSize = 1;

        // If our currIndex reaches the maximun, or our currentGroupSize 
        // would exceed groupsize, we are out the loop
        while (currIndex < hand.length && currGroupSize < groupSize) {
            // Setting new values to local variables
            if(hand[currIndex] == next) {
                next = hand[currIndex] + 1;
                hand[currIndex] = -99;
                currGroupSize++;
            }
            currIndex ++;
        }
        return currGroupSize == groupSize;
    }
}
