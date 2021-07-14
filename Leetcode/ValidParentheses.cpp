class Solution {
public:
    bool isValid(string s) {
        ios::sync_with_stdio(false);
        stack<char> stk;
        
        for(int i=0; i <s.length(); i++){
            if( s[i] == '[' || s[i] == '{' || s[i] == '('  ) stk.push(s[i]);
            else if( s[i] == ']' || s[i] == '}' || s[i] == ')'  ){ 
                if( stk.empty() ) return false;
                else{
                    switch(s[i]){
                            
                        case ']' :
                            if( stk.top() == '[' ){ stk.pop(); }
                            else{ return false; }
                            break;
                        case '}' :
                            if( stk.top() == '{' ){ stk.pop(); }
                            else{ return false; }
                            break;
                        case ')' :
                            if( stk.top() == '(' ){ stk.pop(); }
                            else{ return false; }
                            break;
                    }
                }
            }
        }
        if( stk.empty() ) return true;
        return false;
    }
};