class Solution {
public:
    int maxScore(vector<int>& arr, int k) { //arr=cardPoints
        int lsum=0,rsum=0,maxsum=0;
        int j=arr.size()-1;
        
        for(int i=0;i<k;i++){
            lsum+=arr[i];
        }
        maxsum=lsum;
        for(int i=k-1;i>=0;i--){
            lsum-=arr[i];
            rsum+=arr[j];
            j--;
            maxsum=max(maxsum,rsum+lsum);
        }
        return maxsum;

    }
};
