class Solution {
public:
    bool isValid(string s) {
        stack<char> mstack;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                mstack.push(c);
                continue;
            }

            // Empty stack with right brace is invalid
            if (!mstack.size()) return false;

            char last = mstack.top();
            mstack.pop();
            switch (last) {
                case '(':
                    if (c != ')') return false;
                    break;
                case '{':
                    if (c != '}') return false;
                    break;
                case '[':
                    if (c != ']') return false;
                    break;
            }

        }

        if (mstack.size()) return false;
        return true;
    }
};
