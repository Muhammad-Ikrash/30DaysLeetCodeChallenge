class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        long int temp = x, reverse = 0;
        while (temp != 0 ){
            reverse *= 10;
            reverse += temp % 10;
            temp /= 10;
        }
        if (reverse == x){
            return true;
        }
        return false;
    }
};