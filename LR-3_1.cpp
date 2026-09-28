#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // вхідний параметр 
    double y;  // результат обчислення виразу 
    double A;  // проміжний результат - функціонально стала частина виразу 
    double B;  // проміжний результат - функціонально змінна частина виразу 

    cout << "x = "; cin >> x;

    y = pow(x, 2) / (2.1 + sin(fabs(x)));

    // спосіб 1: розгалуження в скороченій формі 

        
    if (x <= -5)
        y = y + (1 / tan(exp(x)));
        
    if (x > -5 && x < 0)
        y = y + 2 - (pow(x, 3) / (fabs(x) + 1));

    if (x >= 0)
        y = y + log(sqrt(fabs(x) - (pow(x, 2) / 2)));
        


    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    y = pow(x, 2) / (2.1 + sin(fabs(x)));

    if (x <= -5)
        y = y + (1 / tan(exp(x)));
    else
        if (x > -5 && x < 0)
            y = y + 2 - (pow(x, 3) / (fabs(x) + 1));
        else
            if (x >= 0)
                y = y + log(sqrt(fabs(x) - (pow(x, 2) / 2)));

    cout << endl;
    cout << "2) y = " << y << endl;



    cin.get();
    return 0;
}