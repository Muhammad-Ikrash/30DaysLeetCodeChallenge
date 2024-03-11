class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i = 0; i < size - 1; i+= 2){
            if (nums[i] != nums[i + 1]){
                return nums[i];
            }
        }
        return nums.back();
    }
};