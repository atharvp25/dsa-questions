class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        stack<int>st;

        for(char c: s){
            if(c=='('){
                st.push(score);
                score=0;
            }
            else{
                if(score==0){
                    score=1;
                }
                else{
                    score*=2;
                }
                score+=st.top();
                st.pop();
            }
        
        }
        return score;
    }
};