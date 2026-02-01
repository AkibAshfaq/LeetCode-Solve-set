#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=n+m-1;
        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }       
        return nums1;
    }
};

int main(){
    
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    int m = nums1.size();
    int n = nums2.size();

    Solution s;
    nums1 = s.merge(nums1, 3, nums2, 3);

    for(int i=0; i < nums1.size(); i++){
        cout<< nums1[i] << ",";
    }
}