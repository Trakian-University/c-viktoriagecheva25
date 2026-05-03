#include <iostream>
using namespace std;

char getGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 50) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;
    cout << "Въведете точки: ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Невалидни точки!" << endl;
        return 1;
    }

    char grade = getGrade(score);

    if (grade == "A") {
        cout << "Отличен!" << endl;
    } else if (grade == 'F') {
        cout << "Слаб" << endl;
    } else {
        cout << "Оценка: " << grade << endl;
    }

    return 0;
}
