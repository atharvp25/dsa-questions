// Q] Rearrange Array Element by Sign
//Working .....
class Solution {
public:
     vector<int>arr;

         int i=0;
         int j=0;

         while(i!=nums.size() || j!=nums.size()){
             if(nums[i]>0){
                 arr.push_back(nums[i]);
                 i++;
                 if(nums[i]<0){
                     j=i;
                 }
             }

                 if(nums[j]<0){
                 arr.push_back(nums[j]);
               j++;
                 if(nums[j]>0){
                     i=j;
                 }

               
             }
        }
         return arr;
        
    }
};
