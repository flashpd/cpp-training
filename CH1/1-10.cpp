#include <iostream>

using namespace std;

int main()
{
    int distance = 14;
    int sec = 45 * 60 + 30;

    double speed = (distance * 1.0 / 1.6) / (sec * 1.0 / 3600);

    cout << speed << endl;

    return 0;
}
