#include <iostream>
#include <cmath>
using namespace std;

void solveQuadratic(double a, double b, double c) {

    if (a == 0) {
        cout << "Не е квадратно уравнение!" << endl;
        return;
    }

    double disc = b * b - 4 * a * c;

    if (disc > 0) {
        double x1 = (-b + sqrt(disc)) / 2 * a;
        double x2 = (-b - sqrt(disc)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (disc == 0) {
        double x = -b / (2 * a);
        cout << "x = " << x << endl;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-disc) / (2 * a);
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Въведете a, b, c: ";
    cin >> a >> b >> c;

    solveQuadratic(a, b, c);

    if (a != 0 && b != 0) {
        cout << "Сумата на корените: " << -b / a << endl;
        cout << "Произведението: " << c / a << endl;
    }

    return 0;
}
