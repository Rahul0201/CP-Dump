class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios::sync_with_stdio(false);
        sort(begin(nums),end(nums));
        int result = 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == result && result!=INT_MAX) result++;
            else if(nums[i] >result) break;
        }
        return result;
    }
};