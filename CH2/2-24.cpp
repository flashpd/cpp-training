#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an amount in double, for example 11.56: ";
    double amount;
    cin >> amount;
    
    int remainingAmount = static_cast<int>(amount * 100);
 
    int dollars = remainingAmount / 100;
    int cents = remainingAmount % 100;
    cout << dollars << " " << cents << endl;

    return 0;
}
