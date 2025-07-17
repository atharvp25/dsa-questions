// Q] Rearrange Array Element by Sign
//Type1 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>arr3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        int i=0;
        int j=0;

        while(i<arr1.size() && j<arr2.size()){
            arr3.push_back(arr1[i]);
            i++;
            arr3.push_back(arr2[j]);
            j++;
        }
        while(i<arr1.size()){
            arr3.push_back(arr1[i]);
            i++;
        }
        while(j<arr2.size()){
            arr3.push_back(arr2[j]);
            j++;
        }
        return arr3;
        
    }
};
