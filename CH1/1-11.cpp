#include <iostream>

using namespace std;

int main()
{
    int base = 312032486;
    long sec = 5 * 365 * 24 * 60 * 60; 
    base = base + sec / 7 - sec / 13 + sec / 45;
    
    cout << base << endl;

    return 0;
}
