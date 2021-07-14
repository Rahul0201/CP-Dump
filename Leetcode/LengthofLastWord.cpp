class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        int index = n-1;
        while(index>=0 && s[index] == ' ') index--; 
        while(index>=0 && s[index] != ' '){
            count++;
            index--;
        }

        return count;
    }
};