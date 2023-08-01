class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        while(i>=0){
            if(num[i]=='3'||num[i]=='5'||num[i]=='1'||num[i]=='9'||num[i]=='7'){
                return num;
            }
            num.pop_back();
            i--;
        }
        return num;
    }
};