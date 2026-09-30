// Lab_03_3.cpp
// < Євченко Костянтин >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції
// Варіант 8
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    double y;
    double R;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -8-R)
        y = -R;
    else
        if (-8-R < x <= -8 + R)
            y = -R + sqrt(R*R - pow((x + 8), 2));
        else
            if (-8 + R < x <= 2)
                y = ((2 + R) / (10 - R)) * (x - 2) + 2;
            else
                if (2 < x <= 6)
                    y = 0;
                else
                    y = pow((x - 6), 2);
    
    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}