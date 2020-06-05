#include <iostream>

using namespace std;

int main()
{
    double a = 1.0;
    double sum1 = 0, sum2 = 0;
    int flag = 1;
    for (int i = 1; i <= 11; i+=2)
    {
        if (flag == 1)
        {
            sum1 += a / i;
            flag = 0; 
        }  
        else 
        {
            sum1 -= a / i;
            flag = 1;
        }
    }
    sum1 *= 4;
    cout << sum1 << endl;
    
    flag = 1;
    for (int i = 1; i <= 13; i+=2)
    {
        if (flag == 1)
        {
            sum2 += a / i;
            flag = 0; 
        }  
        else 
        {
            sum2 -= a / i;
            flag = 1;
        }
    }
    sum2 *= 4;
    cout << sum2 << endl;

    return 0;

}
