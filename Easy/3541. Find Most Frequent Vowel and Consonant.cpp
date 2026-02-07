// 1MS
class Solution {
public:
    int maxFreqSum(string s) {
        int V[26]={0};
        int C[26]={0};
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') V[c-'a']++;
            else C[c-'a']++;
        }
        int maxV=0, maxC=0;
        for(int i=0; i<26; i++){
            maxV=max(maxV,V[i]);
            maxC=max(maxC,C[i]);
        }
        return maxV+maxC;
    }
};

// 3MS with bit comparison
class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26]={0};
        constexpr unsigned mask = 1+(1<<'e'-'a')+(1<<'i'-'a')+(1<<'o'-'a')+(1<<'u'-'a');
        int maxV=0, maxC=0;
        for(char c:s){
            freq[c-'a']++;
            for(int i=0; i<26; i++){
                if(((1<<i) & mask)!=0) maxV=max(maxV,freq[i]);
                else maxC=max(maxC,freq[i]);
            }
        }
        return maxV+maxC;
    }
};