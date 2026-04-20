class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // Need to find correct row first (rlow == rhigh), then search column

        int rLow = 0;
        int rHigh = matrix.size() - 1;

        while (rLow <= rHigh) {
            int rMid = (rLow + rHigh)/2;

            if (target < matrix[rMid][0]) {
                rHigh = rMid - 1;
            } else if (target > matrix[rMid].back()) {
                rLow = rMid + 1;
            } else {
                break;
            }
        }

        // Possibly broke early
        if (!(rLow<=rHigh)) return false;

        int row = (rLow+rHigh)/2;


        // target is in this row;
        // At this point rLow == rHigh. We have the correct row. Now search row
        int cLow = 0;
        int cHigh = matrix[row].size() - 1;

        while (cLow <= cHigh) {
            int cMid = (cLow + cHigh)/2;

            if (target < matrix[row][cMid]) {
                cHigh = cMid - 1;
            } else if (target > matrix[row][cMid]) {
                cLow = cMid + 1;
            } else {
                // target was found
                return true;
            }
        }


        return false;
    }
};
