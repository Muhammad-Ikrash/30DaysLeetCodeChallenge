class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = nums[0];
        int size = nums.size();
        for (int i = 0; i < size; i++){
            int temp = 1;
            for (int j = i;j < size; j++){
                temp *= nums[j];
                if (temp > prod){
                    prod = temp;
                }
            }
        }
        return prod;
    }
};