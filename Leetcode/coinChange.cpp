class Solution {
    vector<int> dp;
public:
    Solution():dp(10001,-1){
        dp[0] = 0;
    }
    int calculate(vector<int>& coins, int amount) {
        if ( amount == 0) return 0;
        int ans = INT_MAX;
        for( int coin : coins){
            if(amount - coin >= 0 ){
                int subans = 0;
                if(dp[amount - coin] != -1){
                    subans = dp[amount - coin];
                }else{
                    subans = calculate(coins, amount-coin);
                }
                if(subans != INT_MAX && subans+1 < ans){
                    ans = subans+1;
                }
            }
        }
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int result = calculate(coins,amount);
        if(result == INT_MAX) return -1;
        return result;
    }
};