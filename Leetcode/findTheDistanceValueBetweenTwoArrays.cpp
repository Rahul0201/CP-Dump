class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(begin(arr2),end(arr2));
        int count = 0;
        for(int i : arr1){
            bool b = true;
            for (int j : arr2)
                if(abs(i-j) <= d){
                    b = false;
                    break;
                }  
            if(b) ++count;
        }
        return count;
    }
};