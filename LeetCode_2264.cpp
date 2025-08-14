class Solution {
public:
    string largestGoodInteger(string num) {
    string result = "";
    
    for (int i = 0; i <= num.length() - 3; ++i) {
        if (num[i] == num[i+1] && num[i] == num[i+2]) {
            string triplet = num.substr(i, 3); // num.substr(st,end) this will return substring betw st and end
            if (triplet > result) {
                result = triplet;
            }
        }
    }
    return result;
}

};
