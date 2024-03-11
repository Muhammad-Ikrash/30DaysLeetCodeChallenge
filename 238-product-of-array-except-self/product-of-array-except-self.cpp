class Solution {

public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int suf = 1, pre = 1;
        vector <int> ret;
        for (int i = 0; i < size; i++){
            ret.push_back(1);
            ret[i] *= pre;
            pre *= nums[i];
        }

        for (int i = size - 1; i >= 0; i--){
            ret[i] *= suf;
            suf *= nums[i];
        }
        

        return ret;
    }
};