class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int row = mat.size();
        int col = mat[0].size();
        
        if( row*col != r*c ) return mat;
        
        vector<vector<int>> result(r,vector<int>(c));
        int factor = row/r;
        int k=0,l=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                result[l][k] = mat[i][j];
                k = (k+1)%c;
                if( k == 0 ) l=(l+1)%r;
            }
            
        }
        return result;       
    }
};