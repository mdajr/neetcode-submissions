class Solution {
public:
    bool isAnagram(string s, string t) {
        // Quick break if strings aren't same length
        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> first_string;
        for (int i = 0; i < s.length(); i++) {
            if (first_string.find(s[i]) != first_string.end()) {
                first_string.find(s[i])->second++;
            } else {
                first_string.emplace(s[i], 1);
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (first_string.find(t[i]) != first_string.end()) {
                auto letter{first_string.find(t[i])};
                letter->second--;
                // If we've run out of available letters, break out
                if (letter->second < 0) return false; 
            }
        }

        // Loop through and verify all used letters are zero
        for (auto letter : first_string) {
            if (letter.second != 0) return false;
        }
        return true;
    }
};
