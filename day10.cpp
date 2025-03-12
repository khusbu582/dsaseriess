//q-1: https://leetcode.com/problems/pascals-triangle/description/
//Approach : Using two loops, stored the required row of the pascal traingle by the general fact that an element at (i,j) is a sum of elements at (i-1,j) and (i-1,j-1)
//TC : O(N^2) 
//SC : O(1) 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>>m;
    int N=numRows;
    for(int i=0;i<N;i++){
        vector<int>a(i+1);
        m.push_back(a);
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                m[i][j]=1;
            }
            else{
                m[i][j]=m[i-1][j]+m[i-1][j-1];
            }
        }
    }
    return m;
    }
};


//q-2: https://leetcode.com/problems/rotate-image/description/
//Approach : Transposed the matrix and then reversed each row
//TC : O(n^2)
//SC : O(1)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(i>=j) 
                 swap(matrix[i][j],matrix[j][i]);
            }
        }
       for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
             swap(matrix[k][i],matrix[k][j]);
             i++;
             j--;
        }
    }
    return;
    }
};

