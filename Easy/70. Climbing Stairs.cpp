#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;

        int n1 = 2;
        int n2 = 3;
        int v = 0;

        for (int i = 3; i < n; i++){
            v = n1 + n2;
            n1 = n2;
            n2 = v;
        }
        return v;
    }
};

int main(){
    int p;
    cin>>p;
    Solution s;
    int result = s.climbStairs(p);
    cout<< result;
    return 0;
}