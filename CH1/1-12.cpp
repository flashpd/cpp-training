#include <iostream>

using namespace std;

int main()
{
    int distance = 24;
    int sec = 60 * 60 + 40 * 60 + 35;

    double speed = (distance * 1.6) / (sec * 1.0 / 3600);
    
    cout << speed << endl;

    return 0;
}
