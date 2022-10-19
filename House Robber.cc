//username-->ShreyaDubey1001
//github account-->https://github.com/ShreyaDubey1001
//https://leetcode.com/problems/house-robber/
//LEETCODE PROBLEM HOUSE ROBBER DP APPROACH
#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[n][2];
        memset(dp,0,sizeof(dp));
        dp[n-1][0]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            dp[i][0]=nums[i]+dp[i+1][1];
            dp[i][1]=max(dp[i+1][0],dp[i+1][1]);
        }
        return max(dp[0][0],dp[0][1]);
 }
int main(){
  int n;
  cin>>n;
        if(n==1)return nums[0];
  vector<int>nums;
  for(int i=0;i<n;i++)
    cin>>nums[i];
  return rob(nums);
}
