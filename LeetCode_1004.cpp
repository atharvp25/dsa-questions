class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int countZero=0;
        

        int i=0,j=0,maxLen=0;

        while(j<nums.size()){
            if (nums[j]==0){
                countZero++;
            }

            if(countZero<=k){
                j++;
                
            }
            else{           
                if(nums[i]==0){
                   
                    countZero--;
                }
                i++;
                j++;

            }
            maxLen=max(maxLen,j-i);
        }
        
        return maxLen;
        
    }
};
