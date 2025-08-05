class Solution {
public:
    int numOfUnplacedFruits(vector<int>& arr, vector<int>& brr) {
        int i = 0, j = 0, count = 0;

        while (i < arr.size()) {
            
            if (j == brr.size()) {
                
                count++;
                i++;
                j = 0;
                continue;
            }

            
            if (arr[i] <= brr[j] && brr[j] != -1) {
                
                brr[j] = -1;
                i++;
                j = 0;
            }
            else {
               
                j++;
            }
        }

        return count; 
    }
};
