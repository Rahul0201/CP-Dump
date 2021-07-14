class Solution {
public:
    int myAtoi(string s) {
        ios::sync_with_stdio(false);
        int result = 0;
        int i=0;
        bool isnegetive = false;
        while(s[i] == ' ') i++;
        if(s[i] == '-' ){
            isnegetive = true;
            i++;
        } 
        else if(s[i] == '+' ){
            i++;
        } 
        while(s[i]<= '9' && s[i]>= '0'){
            if (result > INT_MAX/10 || (result == INT_MAX/10 && s[i] - '0' > 7) ){
            if (isnegetive)
                return INT_MIN;
            else
                return INT_MAX;
            }
            int digit = s[i] - '0';
            result = 10*result + digit;
            i++;
        }
        if(isnegetive) result = -1*(result);
        return result;
    }
};