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

// int main() {
//
//     int score;
//     cout << "Please enter your score: ";
//     cin >> score;
//
//     score = score / 10;
//
//     switch (score) {
//             default: cout << "F" << endl; break;
//             case 6: cout << "D" << endl; break;
//             case 7: cout << "C" << endl; break;
//             case 8: cout << "B" << endl; break;
//             case 9: cout << "A" << endl; break;
//             case 10: cout << "Perfect" << endl; break;
//     }
//
// }

//problem 12 (triangle checker)

// int main() {
//
//     int ang1, ang2, ang3;
//     cout << "Input triangle angles: ";
//     cin >> ang1 >> ang2 >> ang3;
//
//     if (ang1 <= 0 || ang2 <= 0 || ang3 <= 0) {
//         cout << "Triangle angles are invalid" << endl;
//         return 0;
//     }
//     if (ang1 + ang2 + ang3 == 180) cout << "Triangle angles are valid" << endl;
//     else cout << "Triangle angles are not valid" << endl;
//
// }

//problem 13 - quadratic solver

// #include <cmath>
//
// int main() {
//
//     double a, b, c;
//     cout << "Input a, b, and c of your quadratic: ";
//     cin >> a >> b >> c;
//
//     double discriminant = b * b - 4 * a * c;
//
//
//     if (discriminant < 0) {
//         cout << "No solutions" << endl;
//         return 0;
//     }
//
//     else {
//         double root1 = (-b + sqrt(discriminant))/(2*a);
//         double root2 = (-b - sqrt(discriminant))/(2*a);
//
//         if (discriminant == 0) {
//             cout << "The solution is: x = " << root1 << endl;
//             return 0;
//         }
//         else {
//             cout << "The solutions are: x1 = " << root1 <<" and x2 = "<< root2 << endl;
//         }
//     }
// }

//problem 14 upper or lower or not

// int main() {
//
//     char letter;
//     cout << "Enter a letter: ";
//     cin >> letter;
//
//     if (letter >= 'a' && letter <= 'z') cout << "The letter is lowercase" << endl;
//     else if (letter >= 'A' && letter <= 'Z') cout << "The letter is uppercase" << endl;
//     else cout << "Not in the alphabet" << endl;
//
// }

//problem 15 price c__cpp_impl_three_way_comparison

// int main() {
//
//     double weight1, price1;
//     double weight2, price2;
//
//     cout << "Enter weight and price for first package: ";
//     cin >> weight1 >> price1;
//
//     cout << "Enter weight and price for second package: ";
//     cin >> weight2 >> price2;
//
//     if ((weight1 / price1) > (weight2 / price2)) cout << "Package 1 has better value" << endl;
//     else if ((weight1 / price1) < (weight2 / price2)) cout << "Package 2 has better value" << endl;
//     else cout << "Both have the same value" << endl;
//
// }

//problem 16 palindrome checker

// int reverseInteger(int num) {
//     int reversed_number = 0;
//     while (num != 0) {
//         int remainder = num % 10;
//         reversed_number = reversed_number * 10 + remainder;
//         num /= 10;
//     }
//     return reversed_number;
// }
//
// int main() {
//
//     int num;
//     cout << "Enter a three-digit integer: ";
//     cin >> num;
//
//     if (num == reverseInteger(num)) cout << "It is a palindrome" << endl;
//     else cout << "It is not a palindrome" << endl;
// }

//problem 17
// #include <cctype>
//
// int main() {
//
//     char language;
//     cout<<"Input u for Uzbek, r for Russian, e for English, or g for German: ";
//     cin>>language;
//
//     char lowered = tolower(language);
//
//     if (lowered == 'u') cout << "Salom!";
//     else if (lowered == 'r') cout << "привет!";
//     else if (lowered == 'e') cout <<"Hello!";
//     else if (lowered == 'g') cout <<"Hallo!";
//     else cout << "I don't speak that language :(";
//
//
// }

//problem 18 point checker
//
// int main() {
//
//     int x, y;
//     cout << "Please enter x and y coordinates of your point: ";
//     cin >> x >> y;
//
//     double distance = sqrt(pow(x - 1, 2) + pow(y - 1, 2));
//     cout << distance << endl;
//
//     if (distance <= 10) cout << "Point is in the circle";
//     else cout << "Point is not in the circle";
//
//
// }

//problem 18.5 gpa calculator

// int main() {
//
//     float gpa;
//     cout << "Please enter your GPA: ";
//     cin >> gpa;
//
//     int gpacase = gpa * 10;
//
//     if (gpacase > 45) {
//         cout << "Invalid GPA inputted" << endl;
//         return 0;
//     }
//
//     switch (gpacase) {
//             default: cout << "No scholarship" << endl; break;
//             case 30:
//             case 31:
//             case 32:
//             case 33:
//             case 34:
//                 cout << "50%" << endl; break;
//             case 35:
//             case 36:
//             case 37:
//             case 38:
//             case 39:
//                 cout << "60%" << endl; break;
//             case 40:
//             case 41:
//             case 42:
//             case 43:
//             case 44:
//                 cout << "80%" << endl; break;
//             case 45: cout << "Full scholarship" << endl; break;
//     }
//
// }

//problem 19 future dates

int main() {
    int today, elapseddays;
    cout << "Enter today's day: ";
    cin >> today;
    cout << "Enter number of days elapsed since today: ";
    cin >> elapseddays;

    int futureday = today + elapseddays;

    switch (today) {

        default: cout << "Invalid day?" << endl; break;
        case 0:
            cout << "Today is Sunday and the future day is ";

        case 1: cout << "Today is Monday and the future day is ";
        case 2: cout << "Today is Tuesday and the future day is ";
        case 3: cout << "Today is Wednesday and the future day is ";
        case 4: cout << "Today is Thursday and the future day is ";
        case 5: cout << "Today is Friday and the future day is ";
        case 6: cout << "Today is Saturday and the future day is ";

    }
}

//problem 20

int main() {



}