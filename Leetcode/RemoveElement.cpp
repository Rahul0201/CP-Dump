class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(begin(nums),end(nums));
        vector<int>::iterator beg = nums.begin();
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val){
                while( i<nums.size() && nums[i] == val) nums.erase(beg+i);
                break;
            }
        }
        return nums.size();
    }
};