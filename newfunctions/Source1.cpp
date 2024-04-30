#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
    void Summa();
    {
        int result = Sum(8, 9, 3);
        cout << "sum " << result << endl;
    }

    void Aver();
    {
        double result = Average(3, 8);
        cout << "aver= " << result << endl;
    }

    void Maximum();
    {
        int result = Max(2, 1, 0);
        cout << "max= " << result << endl;
    }

    void Positiv(); // If2
    {
        int result = If2(-7);
        cout << "Positively= " << result << endl;
    }

    void Func(); //If24
    {
        double result = If24(30);
        cout << "Znachenie f= " << result << endl;
    }
}
