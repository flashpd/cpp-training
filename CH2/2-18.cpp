#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << left << endl;

    cout << setw(6) << "a" << setw(6) << "b" << "pow(a, b)" << endl;
    for (int i = 1; i <=5 ; ++i)
    {
       cout << setw(6) << i << setw(6) << i + 1 << pow(i, (i + 1) * 1.0) << endl; 
    }

    cout << endl;
}
