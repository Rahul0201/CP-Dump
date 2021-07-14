class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios::sync_with_stdio(false);
        int n = nums.size();
        int sum_of_n = n*(n+1)/2;
        int sum_of_present = 0;
        for(int i=0; i<n; i++) sum_of_present += nums[i];
        return sum_of_n - sum_of_present;
    }
};