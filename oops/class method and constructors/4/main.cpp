#include <iostream>
using namespace std;
class Relaxing{
 public: int s=0,mx=0,x;
 public:int Bench(int n,int m){
 for(int i=1;i<=n;i++) 
{cin>>x;s+=x;mx=max(x,mx);}
cout<<max(mx,(s+m-1)/n+1)<<" "<<mx+m;
return 0;
 }
};
int main()
{ Relaxing Sit;
 int n,m;
 cin>>n>>m;
 Sit.Bench(n,m);
return 0;
}
