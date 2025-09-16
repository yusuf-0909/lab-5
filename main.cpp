#include <iostream>
using namespace std;

//problem 1
// int main() {
//
//     double number;
//     cout << "Enter a number: ";
//     cin >> number;
//
//     if (number > 0)
//         cout <<"Positive"<< endl;
//
//     else if (number < 0) cout <<"Negative"<< endl;
//
//     else cout <<"Zero"<< endl;
//
// }

//problem 2

// int main() {
//
//     int number;
//     cout << "Enter an integer: ";
//     cin >> number;
//
//     if (number % 2 == 0)
//         cout <<"Even"<< endl;
//
//     else if (number % 2 != 0) cout <<"Odd"<< endl;
//
//     else cout <<"Zero"<< endl;
//
// }

//problem 3

// int main() {
//
//     int x, y;
//     cout << "Please enter two integers: ";
//     cin >> x >> y;
//     if (x > y) {cout << x << " is the largest number."<< endl; return 1;}
//     else if (x == y) {cout << "The numbers are equal."<< endl; return 1;}
//     else if (x < y) {cout << y << " is the largest number."<< endl; return 1;}
//
// }

//problem 4

// int main() {
//
//     int x, y, z;
//     cout << "Please enter three integers: ";
//     cin >> x >> y >> z;
//     if (x > y && x > z) {cout << x << " is the largest number"; return 0;}
//     if (y > x && y > z) {cout << y << " is the largest number"; return 0;}
//     if (z > x && z > y) {cout << z << " is the largest number";}
//     if (x == y && y == z) {cout << "All three numbers are equal"; return 0;}
//
// }

//problem 5
// int main() {
//
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {cout << year << " is a leap year" << endl; return 0;}
//     else cout << year << " is not a leap year" << endl; return 0;
//
//
// }

//problem 6

// int main() {
//
//     int speed;
//     cout << "Please enter your vehicle's speed: ";
//     cin >> speed;
//     if (speed < 20) cout << "too slow" << endl;
//     else if (speed > 80) cout << "too fast" << endl;
//     else cout << "just right" << endl;
//
// }

//problem 7

// int main() {
//
//     int score;
//     cout << "Enter your test score: ";
//     cin >> score;
//     if (score >= 50) cout << "Pass" << endl;
//     else cout << "Fail" << endl;
//
// }

//problem 8

// int main() {
//
//     double num;
//     cin >> num;
//
//     if (num != 0)
//         if (num > 0) cout << "Positive" << endl;
//         else cout << "Negative" << endl;
//     else cout << "Zero" << endl;
//
// }

//problem 9

// int main() {
//
//     char color;
//     cout << "Input g, y, or r: ";
//     cin >> color;
//     switch (color) {
//         case 'g': cout << "GO!" << endl;
//             break;
//         case 'y': cout << "Get ready!" << endl;
//             break;
//         case 'r': cout << "Stop!" << endl;
//             break;
//
//         default: cout << "Whaaaaat?" << endl;
//     }
//
// }

//problem 10

int main() {

    int score;
    cout << "Please enter your score: ";
    cin >> score;

    score = score / 10;

    switch (score) {
            default: cout << "F" << endl; break;
            case 6: cout << "D" << endl; break;
            case 7: cout << "C" << endl; break;
            case 8: cout << "B" << endl; break;
            case 9: cout << "A" << endl; break;
            case 10: cout << "Perfect" << endl; break;
    }

}