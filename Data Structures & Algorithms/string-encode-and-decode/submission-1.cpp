class Solution {
public:

    string encode(vector<string>& strs) {
        stringstream stream;
        for (auto str : strs) {
            stream << str.length() << delim << str;
        }
        return stream.str();
    }

    vector<string> decode(string s) {
        vector<string> ret;

        int i = 0;
        while (i < s.length()) {
            int mark = s.find(delim, i);
            int len = stoi(s.substr(i, mark - i));
            string text = s.substr(mark + 1, len);
            ret.push_back(text);
            i = mark + 1 + len;
        }
        return ret;
    }

    char delim = 36; // $
};
