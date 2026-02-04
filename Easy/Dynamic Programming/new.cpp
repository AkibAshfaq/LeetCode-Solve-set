// 1MS Solution
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p(numRows);
        for(int i=0; i<numRows; i++){
            p[i].assign(i+1,1);
            for(int j=1; j<i; j++) p[i][j]=p[i-1][j]+p[i-1][j-1];
        }
        return p;
    }
};

// 2MS Solution
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
        for(int i=0; i<numRows; i++){
            pascal[i].resize(i + 1);
            pascal[i][0]=pascal[i][i]=1;
            for(int j=1; j<i; j++) pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
        return pascal;
    }
};