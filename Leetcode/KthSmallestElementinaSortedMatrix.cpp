class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();
        int *result;
        result = &matrix[0][0];
        vector<int> tos(n,0);
        int smallest;
        
        while(k--){

            int i = 0,j;
            smallest = matrix[n-1][n-1];
            
            for(i=0; i<n; i++){
                if(tos[i]<n && matrix[tos[i]][i] <= smallest){
                    smallest = matrix[tos[i]][i];
                    result = &matrix[tos[i]][i];
                    j=i;
                }
            }
            tos[j]++;
        }
        return *result;
    }
        
};