class Solution {
public:
    bool isPalindrome(string s) {
        auto front = s.begin();
        auto back = s.end() - 1;

        while (front < back) {

            while (!isalnum(*front) && front != back) {
                front++;
            }
            while (!isalnum(*back) && front != back) {
                back--;
            }

            if (tolower(*front) != tolower(*back)) return false;
            front++;
            back--;
        }
        return true;
    }
};
