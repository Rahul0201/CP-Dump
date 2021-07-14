class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int size=arr.size();
        map<int,int> element_count;
        for(int i : arr) element_count[i]++;
        vector<int> count_arr;
        for(auto &i : element_count) count_arr.push_back(i.second);
        sort(begin(count_arr), end(count_arr),greater<int>());
        int sum=0;
        int i=0;
        for(i = 0; i<count_arr.size();i++){
            sum += count_arr[i];
            if( sum >= (size-sum))
                break;
        }
        return i+1;
        
    }
};