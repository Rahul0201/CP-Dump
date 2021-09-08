class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> value_index;
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
            if( value_index.find(target-nums[i]) != value_index.end()  ){
                result.push_back(i);
                result.push_back(value_index[target-nums[i]]);
                return result;
            }else{
                value_index[nums[i]] = i;
            }
        return result;
    }
};