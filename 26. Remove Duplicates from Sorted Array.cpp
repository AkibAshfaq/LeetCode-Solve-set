class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int i = 0; 
        int len = nums.size(); 
        for (int j = 1; j < len; j++) {
            if (nums[j] != nums[i]) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        return i + 1;  // new length of unique array
    }
};
