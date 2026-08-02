class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> arr;
        int row = mat.size();
        int col = mat[0].size() ;
        int count = 0 ;
        int total = row*col;
        int i = 0 , j = 0 ;
        while(count<total){
            if(j == 0 && j != col-1 ){
                arr.push_back(mat[i][j]);
                j++;
                count++;
            }
            else{
                arr.push_back(mat[i][j]);
                i++;
                count++;
            }
            if(i == 0 && i != row-1){
                arr.push_back(mat[i][j]);
                i++;
                count++;
            }
            else{
                arr.push_back(mat[i][j]);
                j++;
                count++;
            }
        }     
        return arr;   
    }
};