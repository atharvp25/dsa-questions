// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         stack<char> st;

//         for(int i = 0; i < num.size(); i++) {

//             while(!st.empty() && k > 0 && st.top() > num[i]) {
//                 st.pop();
//                 k--;
//             }

//             st.push(num[i]);
//         }

//         // remove remaining k digits
//         while(k > 0 && !st.empty()) {
//             st.pop();
//             k--;
//         }

//         string str = "";

//         while(!st.empty()) {
//             str += st.top();
//             st.pop();
//         }

//         reverse(str.begin(), str.end());

//         // remove leading zeros
//         int i = 0;
//         while(i < str.size() && str[i] == '0') {
//             i++;
//         }

//         str = str.substr(i);

//         // if empty
//         if(str == "") {
//             return "0";
//         }

//         return str;
//     }
// };
class Solution {
public:
    string removeKdigits(string num, int k) {

        string ans;

        for(char ch : num) {

            while(!ans.empty() && k > 0 && ans.back() > ch) {
                ans.pop_back();
                k--;
            }

            ans.push_back(ch);
        }

        // remove remaining digits
        while(k > 0 && !ans.empty()) {
            ans.pop_back();
            k--;
        }

        // remove leading zeros
        int i = 0;
        while(i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;
    }
};
