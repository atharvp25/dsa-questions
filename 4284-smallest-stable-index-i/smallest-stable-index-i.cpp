// class Solution {
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
//         vector<int> maximum;
//         vector<int> minimum(nums.size());

//         int max_ = INT_MIN;
//         int min_ = INT_MAX;

//         for (int i = 0; i < nums.size(); i++) {
//             max_ = max(max_, nums[i]);
//             maximum.push_back(max_);
//         }
//         for (int i = nums.size() - 1; i >= 0; i--) {
//             min_ = min(min_, nums[i]);
//             minimum[i] = min_;
//         }

//         for (int i = 0; i < nums.size(); i++) {
//             if (maximum[i] - minimum[i] <= k) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };
//Optimize for the Space 
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> minimum(n);
        minimum[n - 1] = nums[n - 1];

        // Suffix minimum
        for (int i = n - 2; i >= 0; i--) {
            minimum[i] = min(minimum[i + 1], nums[i]);
        }

        int maximum = INT_MIN;

        // Prefix maximum + check
        for (int i = 0; i < n; i++) {
            maximum = max(maximum, nums[i]);

            if (maximum - minimum[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};
