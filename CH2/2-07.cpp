#include <iostream>

using namespace std;

int main()
{
    long long minute;
    int year, day, temp1, temp2;
    
    cin >> minute;
    temp1 = 24 * 60;
    temp2 = temp1 * 365;

    year = minute / temp2;
    day = minute % temp2 / temp1;

    cout << year << " " << day << endl;

    return 0;
}
