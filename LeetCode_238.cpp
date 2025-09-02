//Product of Array Except Self 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        int product = 1;

        for(int i = 0 ;i < nums.size(); i++){
            if( nums[i] == 0 ){
                zeroCount++;                
            }
            else{
                product*=nums[i];
            }
        }

        if ( zeroCount == 1 ){
            
            
            for(int i=0;i<nums.size();i++){
                if(nums[i] == 0 ){
                    nums[i]=product;
                }
                else{
                    nums[i]=0;
                }
            }
            return nums;
        }
        else if (zeroCount>1) {
            for(int i = 0 ;i<nums.size();i++){
                nums[i]=0;
            }            
            return nums;
        }
        else{
              
            // vector<int> arr(nums.size(), 0);

            // for(int i = 0 ;i<nums.size();i++){
            //     arr[i]=product/nums[i];
            // }
        
            //  return arr;
            int n = nums.size();
            vector<int> result(n, 1);

            // left pass
            int left = 1;
            for (int i = 0; i < n; ++i) {
                result[i] = left;
                left *= nums[i];
            }

            // right pass
            int right = 1;
            for (int i = n - 1; i >= 0; --i) {
                result[i] *= right;
                right *= nums[i];
            }

            return result;

        }
    }
};
