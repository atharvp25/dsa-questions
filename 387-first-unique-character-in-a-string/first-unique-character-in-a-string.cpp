// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<char,int>map1;
//         unordered_map<char,int>map2;

//         for(int i=0;i<s.length();i++){
//             map1[s[i]]++;
//             map2[s[i]]=i;
//         }
//         vector<char>ch;
//         for(auto p : map1){
//             if(p.second==1){
//                 ch.push_back(p.first);
//             }
//         }
//         int ans=INT_MAX;
//         for(int i=0;i<ch.size();i++){
//             ans=min(ans,map2[ch[i]]);
//         }
//         if(ans==INT_MAX){
//             return -1;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        // Count frequency
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Find first character whose frequency is 1
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
