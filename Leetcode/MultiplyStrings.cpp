class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1[0]=='0' || num2[0]=='0') return string("0");
        int size = (num1.length()-1)+(num2.length()-1)+3;
        char* result = new char[size];
        result[size-1] = '\0';
        for(int i=0; i<size-1;i++) result[i] = '0';
        for(int i=(num1.length()-1); i>=0; i--){
            for(int j=(num2.length()-1); j>=0;j--){
                int end = (size-2)-((num1.length()-1)-i+(num2.length()-1)-j);
                int sum = result[end]-'0' + (num1[i] - '0')*(num2[j] - '0');
                result[end] = sum%10 +'0';
                int carry = sum/10;
                int current = end-1;
                while(carry){
                    int sum = result[current]-'0' + carry;
                    carry = sum/10;
                    result[current] = sum%10+'0';
                    current--;
                }
                
            }
        }
        while(*result == '0') result++;
        return string(result);
        
    }
};