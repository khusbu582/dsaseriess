//ques->1:SEARCH A 2D MATRIX i
//Approach :used binary search to implement search in the matrix
//TC:O(log N)
//SC:O(1)
//code
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row * col - 1;
        int mid = start + (end - start) / 2;
        while (start <= end) {
            int element = matrix[mid / col][mid % col];
            if (element == target) {
                return 1;
            } else if (element < target) {
                start = mid + 1;
            }
            else { 
                end = mid - 1;
            }
        mid = start + (end - start) / 2;
        }
        return 0;
    }
};



//ques-> search in 2d matrix ii
//Approach :used binary search to implement search in the matrix
//TC:O(log N)
//SC:O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j=matrix[0].size()-1;
        int i=0;
        while(i<matrix.size() && j>=0)
        {
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
