class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        ios::sync_with_stdio(false);
        int carry = 0;
        digits[digits.size()-1] +=1;
        carry = digits[digits.size()-1]/10;
        digits[digits.size()-1] = digits[digits.size()-1]%10;
        for(int i = digits.size()-2 ; i>=0 && carry; i--){
            digits[i] += carry;
            carry = digits[i]/10;
            digits[i] = digits[i]%10;
        }
        if(carry) digits.insert(digits.begin(),carry);
        
        return digits;
    }
};