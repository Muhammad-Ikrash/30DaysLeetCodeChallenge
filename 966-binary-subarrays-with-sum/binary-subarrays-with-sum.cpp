class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int size = nums.size();
        int count = 0;
        for (int i = 0; i < size; i++){
            int sum = 0;
            for (int j = i; j < size; j++){
                sum += nums[j];
                if (sum == goal)
                {
                    count++;
                }
                else if (sum > goal){
                    break;
                }
            }
            if (sum == 0 && goal == 0 && i == 0){
                return ((size * (size + 1)) / 2);
            }
        }
        return count;
    }
};