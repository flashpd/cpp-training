#include <iostream>

using namespace std;

#define PI 3.1415926

int main()
{
    double radius, length;
    double area, volume;

    cin >> radius >> length;

    area = radius * radius * PI;
    volume = area * length;

    cout << area << " " << volume << endl;

    return 0;
}
