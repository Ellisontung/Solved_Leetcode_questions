class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool deter = false;
        int diagonal = matrix[0].size()<matrix.size()?matrix[0].size():matrix.size();
        for(int i = 0 ; i < diagonal ; i++){
            for(int j = 0 ; j < matrix.size() ; j++){
                if(matrix[j][i]>target) break;
                if(matrix[j][i]==target) return true;
            }
            for(int j = 0 ; j < matrix[i].size() ; j++){
                if(matrix[i][j]>target) break;
                if(matrix[i][j]==target) return true;
            }
        }
        return false;
    }
};