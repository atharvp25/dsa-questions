//Problem Count Hills and valleys
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        int i = 1;

        while (i < nums.size() - 1) {
            
            if (nums[i] == nums[i - 1]) {
                i++;
                continue;
            }

            
            int right = i + 1;
            while (right < nums.size() && nums[right] == nums[i]) {
                right++;
            }

            if (right < nums.size()) {
                if (nums[i] > nums[i - 1] && nums[i] > nums[right]) {
                    count++; 
                } else if (nums[i] < nums[i - 1] && nums[i] < nums[right]) {
                    count++; 
                }
            }

            i++;
        }

        return count;
        
    }
};
