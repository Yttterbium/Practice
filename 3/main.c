#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    
    long long dp[r + 1][3]; 
    
    dp[1][0] = 0; 
    dp[1][1] = 0; 
    dp[1][2] = 7; 
    
    for (int i = 2; i <= r; ++i) {
        dp[i][0] = dp[i-1][1] + dp[i-1][2];
        dp[i][1] = dp[i-1][0] + dp[i-1][2];
        dp[i][2] = 7 * (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]);
    }
    
    long long result = dp[r][0] + dp[r][1] + dp[r][2];
    
    printf("%lld\n", result);
    
    return 0;
}
