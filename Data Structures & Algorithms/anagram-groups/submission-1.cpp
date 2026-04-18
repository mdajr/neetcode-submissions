class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> retVal;

        // loop through all strings
        for (string str : strs) {
            bool matched = false;
            auto strAsMap{toMap(str)};

            for (int i = 0; i < retVal.size(); i++) {
                // We found a matching anagram cache
                if (strAsMap == anagramsMapCache[i]) {
                    matched = true;
                    retVal[i].push_back(str);
                    break;
                }
            }
            if (!matched) {
                retVal.push_back({str});
                anagramsMapCache.push_back(strAsMap);  
            }
        }

        return retVal;

    }

    unordered_map<char, unsigned> toMap(string &input) {
        unordered_map<char, unsigned> retVal;
        for (char c : input) {
            if (retVal.contains(c)) {
                retVal[c]++;
            } else {
                retVal.emplace(c, 0);
            }
        }
        return retVal;
    }

    vector<unordered_map<char, unsigned>> anagramsMapCache;
};
