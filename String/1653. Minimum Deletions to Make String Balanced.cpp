class Solution {
public:
    int minimumDeletions(string s) {
        int bcount = 0;
        int deletation = 0;
        for(char f : s){
            if(f=='b') bcount++;
            else deletation = min(deletation+1,bcount);
        }
        return deletation;
    }
};