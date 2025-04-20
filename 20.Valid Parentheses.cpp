#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;

        for (char c : s) {
            switch (c) {
                
                case '(': case '{': case '[':
                    st.push(c);
                    break;

                case ')':
                    if (st.empty() || st.top() != '(') return false;
                    st.pop();
                    break;

                case '}':
                    if (st.empty() || st.top() != '{') return false;
                    st.pop();
                    break;

                case ']':
                    if (st.empty() || st.top() != '[') return false;
                    st.pop();
                    break;

                default:
                    return false;
            }
        }

        return st.empty();
    }
};
