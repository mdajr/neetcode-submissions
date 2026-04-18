class Solution {
public:
    bool isAnagram(string s, string t) {
        // Quick break if strings aren't same length
        if (s.length() != t.length()) return false;

        int letters[26] = {0};

        for (char c : s) {
            letters[c - 'a']++;
        }
        for (char c : t) {
            letters[c - 'a']--;
            if (letters[c - 'a'] < 0) {
                return false;
            }
        }
        for (int count : letters) {
            if (count != 0) return false;
        }
        return true;
    }
};
