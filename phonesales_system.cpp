/*NAME: Aron kipkoech langat
 REG No: CT101/G/26629/25
 GROUP B; BSC computer science */
#include <iostream>
using namespace std;

int main(){
    string Customer_name;
    string phone_model;
    int quantity;
    float price_per_phone;
    int totalsales;
    string Currency;

    cout <<" Phone sales services" <<endl;
    cout <<" Enter your name:  " <<endl;
    cin >> Customer_name;
    cout <<"Which model do you want: " << endl;
    cin >> phone_model;
    cout <<"How many phones would you buy: " << endl;
    cin >> quantity;
    cout <<"What is the price per phone: " << endl;
    cin >> price_per_phone;
    
    totalsales = quantity * price_per_phone;
     cout << "=================================" <<"\n";
    cout << "The Receipt"<< "\n";
     cout << "================================="<<"\n";
    cout << "Customer Name: "<< Customer_name<< "\n";
    cout <<"Phone model you purchased: "<< phone_model<< "\n";
    cout << "Quantity: "<< quantity<<"\n";
    cout << "Price per phone: "<< price_per_phone<<"\n";
    cout << "================================="<<"\n";
     cout << "TOTAL SALES:"<< totalsales<< Currency<< "\n";


return 0;
}
