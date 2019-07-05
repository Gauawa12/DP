
One of the rudimentary problems to understand DP is finding the nth Fibonacci number. Here, we will solve the problem using top-down approach.

You are given a number. You need to find Fibonacci(number).

Input Format:
The first line of input contains testcases number. . Each testcase contains a number.

Output Format:
For each testcase, in a newline, print the numberth fibonacci number.

Your Task:
You don't need to take any input. You have to complete the function findNthFibonacci.

Constraints:
1 <= testcases <= 100
1 <= number <= 92

Examples:
Input:
2
5
7
Output:
5
13


Sol:

long long helper(int n,long long *dp)
{
    if(n==0 || n==1 || dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=helper(n-1,dp)+helper(n-2,dp);
    
    return dp[n];
}


long long findNthFibonacci(int num)
{
    long long dp[num];
    memset(dp,-1,sizeof(dp));
    dp[0]=1;
    dp[1]=1;
    long long ans=helper(num-1,dp);
    return ans;
}

