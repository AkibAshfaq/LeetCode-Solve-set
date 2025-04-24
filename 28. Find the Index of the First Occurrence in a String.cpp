class Solution {
public:
    int strStr(string haystack, string needle) {
         int num = haystack.find(needle);
            if(num != string::npos)
                return num;
         return -1;
    }
};
