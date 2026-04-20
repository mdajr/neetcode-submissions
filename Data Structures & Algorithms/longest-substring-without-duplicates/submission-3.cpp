class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() <= 1) return s.length();

        int max = 0;
        int l = 0, r = 0;

        unordered_set<char> seen;

        while (r < s.length()) {
            

            while (!seen.contains(s[r]) && r < s.length()) {
                seen.insert(s[r]);
                r++;
            }

            int subLength = r - l;
            if (subLength > max) {
                max = subLength;
            }

            while (r< s.length() && seen.contains(s[r])) {
                seen.erase(s[l]);
                l++;
            }

        }

        return max;

    }
};
