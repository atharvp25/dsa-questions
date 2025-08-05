// This Solution Is not Optimal For Space Complexity it take O(n) Space Becz of HashMap
// vector<int> majorityElement(vector<int>& nums) {
        //int times = nums.size()/3;
        

        // unordered_map<int,int>map;
        // for(int i=0;i<nums.size();i++){
        //     map[nums[i]]++;
        // }
        // nums.clear();
        // for(auto &pair : map){
        //     if(pair.second > times){
        //         nums.push_back(pair.first);
        //     }
        // }
        // return nums;
 //}

// Optimal solution Both Time O(n) and Space O(1)
// Here we use extended Version of Boyer-Moore Majority Voting Algorithm 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {       
        int cad1 = 0, cad2 = 0, count1 = 0, count2 = 0;
        int n = nums.size();
        int times = n / 3;

        // Step 1: Find potential candidates
        for (int num : nums) {
            if (num == cad1) {
                count1++;
            }
            else if (num == cad2) {
                count2++;
            }
            else if (count1 == 0) {
                cad1 = num;
                count1 = 1;
            }
            else if (count2 == 0) {
                cad2 = num;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        // Step 2: Verify actual occurrences
        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == cad1) count1++;
            else if (num == cad2) count2++;
        }

        // Step 3: Prepare result
        nums.clear();
        if (count1 > times) nums.push_back(cad1);
        if (count2 > times && cad2 != cad1) nums.push_back(cad2);

        return nums;
        
    }
};
