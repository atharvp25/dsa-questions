//Largest Odd Number in String

class Solution {
public:
    string largestOddNumber(string num) {
        int index=-1;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]%2!=0){
                index=i;
                break;
            }
        }
        if(index==-1){
            num="";
            return num;
        }

        string final1="";

        for(int i=0;i<=index;i++){
            final1+=num[i];
        }

        return final1;
        
    }
};
