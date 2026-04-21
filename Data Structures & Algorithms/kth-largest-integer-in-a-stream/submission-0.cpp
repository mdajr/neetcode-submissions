class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) : kth{k} {
        for (auto num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        heap.push(val);

        if (heap.size() > kth) {
            heap.pop();
        }
 
        return heap.top();
    }

    priority_queue<int, vector<int>, std::greater<int>> heap;
    int kth;
};
