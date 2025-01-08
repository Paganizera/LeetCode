class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;

        int reversed = 0;
        int decimalPosition = x;
        
        while (decimalPosition != 0) {
            reversed = reversed*10 + decimalPosition % 10;
            decimalPosition = decimalPosition/10;
        }

        return (reversed == x);
    }
}
