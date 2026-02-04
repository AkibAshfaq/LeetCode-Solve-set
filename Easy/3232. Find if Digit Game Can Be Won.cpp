class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice = 0; 
        int bob = 0;
        int i=0;
        while(i < nums.size()){
            if(nums[i]>=10)alice+=nums[i++];
            else bob+=nums[i++];
        }
        return alice!=bob;
    }
};