#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    cin >> num;

    while (num != 0)
    {
        int temp = num % 10;
        sum += temp;
        num /= 10;
    }
    
    cout << sum << endl;

    return 0;
}
