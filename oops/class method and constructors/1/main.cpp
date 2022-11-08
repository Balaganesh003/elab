#include <iostream>
using namespace std;

class Toll{
    public:
    float total_amt = 0;
    int total_cars = 0;
    void  payingcar(float TollAmt){
        total_amt += TollAmt;
        total_cars+=1;
    }
    
    void nonpayingcar(){
        total_cars +=1;
    }
};

int main()
{
    int t;
    cin>>t;
    Toll obj;
    for(int i=0;i<t;i++){
string VehicleNo;
float TollAmt;
cin>>VehicleNo>>TollAmt;
if(TollAmt != 0) 
obj.payingcar(TollAmt);
else
obj.nonpayingcar();
}

cout <<obj.total_cars<<endl;
cout<< obj.total_amt<< endl  ;
	return 0;
}
