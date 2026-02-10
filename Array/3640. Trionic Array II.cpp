class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();
        long long ans = LLONG_MIN;
        int i = 0;
        while (i < n) {
            int j = i + 1;
            while (j < n && nums[j] > nums[j - 1]) j++;
            int p = j - 1;
            if (p == i) { i++; continue; }
            j = p + 1;
            while (j < n && nums[j] < nums[j - 1]) j++;
            int q = j - 1;
            if (q == p) { i = p + 1; continue; }
            j = q + 1;
            while (j < n && nums[j] > nums[j - 1]) j++;
            int r = j - 1;
            if (r == q) { i = q + 1; continue; }
            long long core = 0;
            for (int k = p; k <= q; k++) core += nums[k];
            long long left = LLONG_MIN, curr = 0;
            for (int k = p - 1; k >= i; k--) { curr += nums[k]; left = max(left, curr); }
            long long right = LLONG_MIN;
            curr = 0;
            for (int k = q + 1; k <= r; k++) { curr += nums[k]; right = max(right, curr); }
            if (left != LLONG_MIN && right != LLONG_MIN) ans = max(ans, core + left + right);
            i = q;
        }
        return ans == LLONG_MIN ? -1 : ans;
    }
};
