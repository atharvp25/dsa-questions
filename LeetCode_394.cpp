//Decode String 
class Solution {
public:
    string decodeString(string s) {
        stack<int>nums;
        stack<string>str;
        int num=0;
        string currStr="";
        
        for(char i : s){
            if(i>='0' && i<='9'){
                num=num*10+(i-'0');
            }
            else if (i == '['){
                nums.push(num);
                num=0;
                str.push(currStr);
                currStr="";
            }
            else if (i==']'){
                int multi = nums.top();
                nums.pop();
                string prev = str.top();
                str.pop();

                string repeted = "";

                for(int i=0;i<multi;i++){
                    repeted+=currStr;
                }
                currStr=prev+repeted;
            }
            else{
                currStr+=i;
            }
        }
        return currStr;
        
    }
};
