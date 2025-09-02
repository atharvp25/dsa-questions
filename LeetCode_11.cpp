class Solution {
public:
    int maxArea(vector<int>& hs) {
        int i = 0, j = hs.size() - 1;
        int amount = 0;

        while (i < j) {
            int h = min(hs[i], hs[j]);
            int w = j - i;
            amount = max(amount, h * w);

            
            if (hs[i] < hs[j]) {
                i++;
            } else {
                j--;
            }
}

return amount;
    }
};
