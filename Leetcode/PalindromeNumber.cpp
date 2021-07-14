class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || x==INT_MAX) return false;
        string s = to_string(x);
        int n = s.size();
        cout << " "<<n<<endl;
        bool result = true;
        for(int i=0, j=n-1; j>=i; i++,j--  ){
            cout << s[i] << s[j] << " ";
            if(s[i] != s[j]){
                result =false;
                break;
            }
        } 
        return result;
    }
};