
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    int per_small_room{25} , per_large_room{35},estimate_expiry{30};
    double tex_rate{0.06};
    int small_room{0}, large_room{0};
    cout << "Import the number of small rooms: ";
    cin >> small_room;
    cout << "Import the number of large rooms: ";
    cin >> large_room;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_room << endl;
    cout << "Number of large rooms: " << large_room << endl;
    cout << "Price per small room: " << per_small_room << endl;
    cout << "Price per large room: " << per_large_room << endl;
    cout << "Cost: " <<  (per_small_room*small_room) + (per_large_room*large_room) << endl;
    cout <<"Tax: " << ((per_small_room*small_room) + (per_large_room*large_room))* tex_rate << endl;
    cout <<"===============================" << endl;
    cout << "Total estimate: "  << ((per_small_room*small_room) + (per_large_room*large_room))* tex_rate + ( (per_small_room*small_room) + (per_large_room*large_room)) << endl;
    cout << "This estimate is valid for "<<estimate_expiry << " days" << endl;
    cout << endl;
    return 0;
}

