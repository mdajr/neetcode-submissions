class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, unsigned> freqs;

        for (int num : nums) {
            if (freqs.contains(num)) {
                freqs[num]++;
                continue;
            }
            freqs.emplace(num,1);
        }        

        std::multimap<unsigned, int> ordered_freqs;

        for (auto freq : freqs) {
            ordered_freqs.emplace(freq.second, freq.first);
        }

        vector<int> ret;

        for (auto it = ordered_freqs.rbegin(); it != ordered_freqs.rend(); it++) {
            if (k == 0) {
                break;
            }
            ret.push_back(it->second);
            k--;
        }

        return ret;
    }
};
