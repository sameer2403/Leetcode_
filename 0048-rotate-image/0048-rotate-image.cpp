class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int r = matrix.size();
        int c= matrix[0].size();
        
        for(int i=0; i<r; i++){
            for(int j=i; j<c; j++){
               swap( matrix[j][i], matrix[i][j]);
            }
        }
        for(int i=0; i<r; i++){
           reverse(matrix[i].begin(), matrix[i].end()); 
        }
    }
};