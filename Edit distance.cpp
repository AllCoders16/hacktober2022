//username-->ShreyaDubey1001
//github account-->https://github.com/ShreyaDubey1001/
//leetcode problem:https://leetcode.com/problems/edit-distance/submissions/
#include<stdc++.h>
using namespace std;
int minDistance(string w1, string w2) {
        int n=w1.size(),m=w2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<=n;i++)dp[i][0]=i;
        for(int j=0;j<=m;j++)dp[0][j]=j;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(w1[i-1]==w2[j-1])dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
        return dp[n][m];
    }
int main(){
  string w1,w2;
  cin>>w1>>w2;
  cout<<minDistance(w1,w2);
}
