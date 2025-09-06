class Solution {
public:
    int evalRPN(vector<string>& arr) {
        /*the basics login is we have to conver this postfix to infix and while conversion 
        we have to  peform calculation */
        stack<int>st;
        

        for(int i=0;i<arr.size();i++){
            if(arr[i] !="+" && arr[i] != "-" && arr[i] != "*" && arr[i] != "/"){
                st.push(stoi(arr[i]));
            }
            else{
                int a1= st.top();st.pop();
                int a2=st.top();st.pop();
                
                int result = 0;
                if (arr[i] == "+") result = a2 + a1;
                else if (arr[i] == "-") result = a2 - a1;
                else if (arr[i] == "*") result = a2 * a1;
                else if (arr[i] == "/") result = a2 / a1;
                st.push(result);
            
            }
        }
       return st.top();
    }
};
