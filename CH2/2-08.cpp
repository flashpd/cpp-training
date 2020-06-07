#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int totalSeconds = time(0);
    int currentSecond = totalSeconds % 60;
    int totalMinutes = totalSeconds / 60;
    int currentMinute = totalMinutes % 60;
    int totalHours = totalMinutes / 60;
    int currentHour = totalHours % 24;

    cout << currentHour << ":" << currentMinute << ":" << currentSecond << endl;
    
    int offset;    
    cin >> offset;
    currentHour += offset;

    if (currentHour < 0)
        currentHour += 24;

    cout << currentHour << ":" << currentMinute << ":" << currentSecond << endl;
    
    return 0;


}
