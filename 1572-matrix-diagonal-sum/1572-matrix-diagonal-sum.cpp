class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int firstsum=0;
        int secondsum=0;
        //first diagnol
        for(int i=0;i<n;i++){
            firstsum+=mat[i][i];
        }
        //second diagnol
        int i=0,j=n-1;
        while(j>=0){
            secondsum+=mat[i][j];
            i++,j--;
        }
        if(n%2==0){
            return firstsum+secondsum;
        }
        else
         return firstsum+secondsum-mat[n/2][n/2];

    }
};