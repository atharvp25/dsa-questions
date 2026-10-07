class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int distinct = 1;
        int prev = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != prev) {
                distinct++;
                prev = nums[i];

                if (distinct == 3) {
                    return nums[i];
                }
            }
        }

        // Fewer than 3 distinct numbers
        return nums[0];
    }
};