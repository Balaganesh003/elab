#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
vector<vector<int>>dp(1e4+1,vector<int>(101,-1));
int a,b,c;
int ways(int h1,int k1);
int main(){
int h,k;
cin>>h>>a>>b>>c>>k;
cout<<ways(h,k)<<endl;
return 0;
}
int ways(int h1,int k1){
if(dp[h1][k1] != -1)
return dp[h1][k1]%MOD;
if(h1>0&&k1==0)
return 0;
if(h1==0 && k1==0)
return 1;
dp[h1][k1] = 0;
if(h1-a>=0)
dp[h1][k1] = (dp[h1][k1]+ways(h1-a,k1-1))%MOD;
if(h1-b>=0)
dp[h1][k1] = (dp[h1][k1]+ways(h1-b,k1-1))%MOD;
if(h1-c>=0)
dp[h1][k1] = (dp[h1][k1]+ways(h1-c,k1-1))%MOD;
return dp[h1][k1]%MOD;
}
