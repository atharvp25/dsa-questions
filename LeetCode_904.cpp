// Leetcode Problem 904 Fruit Into Basket
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>map;
        int i=0,j=0;
        int maxlen=0;
        while (j < fruits.size()) {
            map[fruits[j]]++;
            if (map.size() <= 2) {
                maxlen = max(maxlen, j - i + 1);
                j++;
            } else {
                while (map.size() > 2) {
                    map[fruits[i]]--;
                    if (map[fruits[i]] == 0) {
                        map.erase(fruits[i]);
                    }
                    i++;
                }
                j++; // Move j here as well so loop progresses
            }
        }
        return maxlen;

        
    }
};
