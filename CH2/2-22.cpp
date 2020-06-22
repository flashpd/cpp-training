#include <iostream>
using namespace std;

int main()
{
    double interest, balance, annualInterestRate;
    
    cin >> balance >> annualInterestRate;
    interest = balance * (annualInterestRate / 1200);

    cout << interest << endl;

    return 0;
}
