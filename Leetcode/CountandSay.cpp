class Solution {
public:
    // string say(string s){
    //     char cur = s[0];
    //     int count = 0;
    //     string result ="";
    //     for(char w : s){
    //         if(w == cur){
    //             count++;
    //         }else {
    //             result = result + to_string(count) + cur;
    //             count = 1;
    //             cur = w;
    //         }
    //     }
    //     result = result + to_string(count) + cur;
    //     return result;  
    // }
    string countAndSay(int n) {
        if(n==1) return "1";
        
        // return say(countAndSay(n-1));
        
        
        // string result = "1";
        // for(int i = 1; i<n; i++) result = say(result);
        // return result;
        ios::sync_with_stdio(false);
        
        string ans = "1";
        for(int i = 1; i<n; i++){
            char cur = ans[0];
            int count = 0;
            string result ="";
            // for(char w : ans)
            for(int j=0; j<ans.length(); j++){
                char w = ans[j];
                if(w == cur){
                    count++;
                }else {
                    result = result + to_string(count) + cur;
                    count = 1;
                    cur = w;
                }
            }
            result = result + to_string(count) + cur;
            ans = result;
        }
        return ans;
    }
};