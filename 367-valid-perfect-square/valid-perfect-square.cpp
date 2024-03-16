class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i = 0;
        while (i * i < num){
            i++;
        }
        return ((i * i == num) ? true : false);

    }
};