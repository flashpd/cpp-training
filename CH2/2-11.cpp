#include <iostream>

using namespace std;

int main()
{
    int year;
    int base = 312032486;
    cin >> year;
    long sec = year * 365 * 24 * 60 * 60; 
    base = base + sec / 7 - sec / 13 + sec / 45;
    
    cout << base << endl;
    
    return 0;
}


