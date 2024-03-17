class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector <int> ans;
        for (int i = 0; i < size - 1;i++){
            vector <int>:: iterator pres = find(nums.begin() + i + 1, nums.end(), target - nums[i]);
            if (pres != nums.end()) {
                ans.push_back(i), ans.push_back(pres - nums.begin());
                return ans;
            }
        }
        return ans;
    }
};