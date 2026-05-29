// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         vector<pair<int,int>>arr;

//         int num_row = matrix.size();
//         int num_col = matrix[0].size();

//         for(int i = 0; i<num_row;i++){
//             for(int j = 0; j<num_col;j++){
//                 if(matrix[i][j]==0){
//                     arr.push_back({i,j});
//                 }
//             }
//         }
//         for(int k = 0;k<arr.size();k++){
//             int row = arr[k].first;
//             int col = arr[k].second;

//             for(int i=0;i<num_row;i++){
//                 matrix[i][col]=0;
//             }
//             for(int j=0;j<num_col;j++){
//                 matrix[row][j]=0;
//             }
//         }

//     }
// };
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> row(rows, 0);
        vector<int> col(cols, 0);

        // mark rows and cols
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // set zeroes
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                if(row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
