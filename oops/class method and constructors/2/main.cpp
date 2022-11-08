#include<iostream>
using namespace std;
class Farm{
    int angle;
     public:void Fence()
    {
        cin>>angle;
        (360%(180-angle) == 0) ? cout<<"YES\n" : cout<<"NO\n" ;
    }
};
int main() {
    Farm robot;
    int t;
    cin>>t;
    for(int i = 0;i<t;i++)
        robot.Fence();
    return 0;
}
