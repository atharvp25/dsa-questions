class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int i=0;
        int j=i+1;
        for(i=0;i<nums.size();i++){
            if(nums.size()%j==0){
                sum+=nums[i]*nums[i];
            }
            j++;
        }
        return sum;
    }
};