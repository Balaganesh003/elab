#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int price,loaves,regularprice;
float discountrate,discount,finalprice;
price=185;
cin>>loaves;
regularprice = loaves*price;
discountrate = float (60)/100;
discount = (float(regularprice) * discountrate);
cout<<fixed<<setprecision(2);
finalprice = float(regularprice)-discount;
cout<< "Regular Price="<<regularprice<<endl;
cout<<   "Amount Discounted="<<discount <<  endl << "Amount to be paid="<<finalprice<< endl;
	return 0;
}
