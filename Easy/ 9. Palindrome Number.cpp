class Solution {
public:
    bool isPalindrome(int x) {

        std::string original = std::to_string(x);
        int len = original.length(); 
        std::string reverse = "";

        for(int i = len - 1; i >= 0; i--){
            reverse += original[i];
        }

        return original == reverse;
    }
};
