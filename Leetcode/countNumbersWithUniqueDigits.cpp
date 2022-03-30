class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        switch(n){
            case 0 : 
                return 1;
                break;
            case 1 : 
                return 10;
                break;
            case 2 : 
                return 91;
                break;
            default : 
                int sum = 9;
                for(int i=0;i<n-1;i++) sum *= 9-i;
                return countNumbersWithUniqueDigits(n-1)+sum;
                break;
            
        }
        return 0;
    }
};