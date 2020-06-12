#include <iostream>

using namespace std;

int main()
{
    double M, finalTemperature, initialTemperature;
    double Q;

    cin >> M  >> initialTemperature >> finalTemperature;
    Q = M * (finalTemperature - initialTemperature) * 4184;
    cout << Q << endl;
    
    return 0;
}
