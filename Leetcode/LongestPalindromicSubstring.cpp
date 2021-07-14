class Solution {
public:
    string longestPalindrome(string s) {
        int start, end;
        int beg_substr = 0;
        int maximum = 1;
        int size = s.length();
        
        for(int i=1; i<size; i++){
            
            // odd substrings
            start = i-1;
            end = i+1;
            while( start>=0 && end<size && s[start] == s[end] ){
                if( maximum < (end-start+1) ){
                    maximum = end-start+1;
                    beg_substr = start;
                }
                start--;
                end++;
            }
        
            // even substrings
            start = i-1;
            end = i;
           while( start>=0 && end<size && s[start] == s[end] ){
                if( maximum < (end-start+1) ){
                    maximum = end-start+1;
                    beg_substr = start;
                }
                start--;
                end++;
            }
        }
        
        string result = s.substr(beg_substr, maximum);
        return result;
              
    }
};