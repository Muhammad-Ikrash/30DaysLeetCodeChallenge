class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size = intervals.size();

        for (int i = 0; i < size - 1; i++){ 
            for (int j = 0; j < size - 1 - i; j++){
                if (intervals[j][0] > intervals[j + 1][0]){
                    swap(intervals[j], intervals[j + 1]);
                }
            }
        }

        for (int i = 0; i < size - 1; i++){
            if (intervals[i][1] >= intervals[i + 1][0]){
                intervals[i][0] = min(intervals[i][0], intervals[i + 1][0]);
                intervals[i][1] = max(intervals[i][1], intervals[i + 1][1]);

                intervals.erase(intervals.begin() + i + 1);
                size--, i--;
            }
        }
        return intervals;
    }
};