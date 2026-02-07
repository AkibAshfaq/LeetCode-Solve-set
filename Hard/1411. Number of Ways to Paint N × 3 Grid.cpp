// Can be solved with recursion
class Solution {
public:
    int numOfWays(int n) {
        long long mod = 1000000007, a= 6, b = 6;
        for(int i=2;i<=n;i++){
            long long na=(3*a+2*b)%mod, nb=(2*a+2*b)%mod;
            a=na, b=nb;
        }
        return (a+b)%mod;
    }
};