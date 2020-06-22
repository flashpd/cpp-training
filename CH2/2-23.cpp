#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double investmentAmount, interestRate, numberOfYears, futureInvestmentValue;

    cin >> investmentAmount >> interestRate >> numberOfYears;
    futureInvestmentValue = 1000 * pow((1 + interestRate / 1200), (numberOfYears * 12));

    cout << futureInvestmentValue << endl;

    return 0;
}
