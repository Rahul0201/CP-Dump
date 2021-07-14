class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int *check = new int[n];
        for(int i=0; i<n; i++) check[i] = 0;
        for(int i=0; i<m; i++){
            bool status = false;
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    check[j] = 1;
                    status = true;
                }
            }
            if(status){
                for(int j=0; j<n; j++)
                    matrix[i][j] = 0;
            }
        }
        for(int i=0; i<n; i++){
            if(check[i])
                for(int j=0; j<m; j++)
                    matrix[j][i] = 0;

        }
        delete[] check;
    }
};