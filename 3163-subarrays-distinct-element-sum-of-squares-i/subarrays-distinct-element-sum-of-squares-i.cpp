class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            unordered_map<int, int> map;
            int count = 0;
            int j = i;

            while (j < nums.size()) {
                map[nums[j]]++;

                if (map[nums[j]] == 1) {
                    count++;
                }

                sum += count * count;
                j++;
            }
        }

        return sum;
    }
};