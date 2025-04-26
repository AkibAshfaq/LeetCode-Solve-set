class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        for(int val : nums)
        {
            if(val >= target)
                return i;
            i++;
        }
        return nums.size();
    }
};
