#include <iostream>

using namespace std;

int main()
{
    double pounds, inchs;
    double BMI;

    cin >> pounds >> inchs;
    BMI = (pounds * 0.45359237) / ((inchs * 0.0254) * (inchs * 0.0254));

    cout << BMI << endl;

    return 0;
}
