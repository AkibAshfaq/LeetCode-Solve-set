class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int len = nums.size();
        for (int a = 0 ; a < len; a++) {
            if (nums[a] != val) {
                nums[i++] = nums[a];   
            }
        }
        return i;
    }
};
