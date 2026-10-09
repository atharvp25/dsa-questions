class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>map;

        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            map[temp].push_back(strs[i]);
        }
        vector<vector<string>>result;
        for(auto it : map){
            result.push_back(it.second);
        }
        return result;

    }
};