#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

int main() {
    int choice;
    cout << "**** CALCULATOR PROJECT ****" << endl;
    cout << "1. Arithmetic Operations" << endl;
    cout << "2. Trigonometric Operations" << endl;
    cout << "3. Logarithmic Operations" << endl;
    cout << "4. Power & Root Operations" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        float a, b;
        char op;
        cout << "\nEnter first number: ";
        cin >> a;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> b;

        switch (op) {
            case '+': cout << "Result: " << a + b << endl; break;
            case '-': cout << "Result: " << a - b << endl; break;
            case '*': cout << "Result: " << a * b << endl; break;
            case '/':
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Error: Cannot divide by zero!" << endl;
                break;
            default: cout << "Invalid arithmetic operator!" << endl;
        }
    }

    else if (choice == 2) {
        int trigChoice;
        double x;
        cout << "\n--- Trigonometric Functions ---\n";
        cout << "1. sin(x) (in degrees)\n";
        cout << "2. cos(x) (in degrees)\n";
        cout << "3. tan(x) (in degrees)\n";
        cout << "4. sec(x) (in degrees)\n";
        cout << "5. cosec(x) (in degrees)\n";
        cout << "6. cot(x) (in degrees)\n";
        cout << "Enter choice (1-6): ";
        cin >> trigChoice;
        cout << "Enter angle in degrees: ";
        cin >> x;
        double radians = x * PI / 180;

        switch (trigChoice) {
            case 1: cout << "Result: " << sin(radians) << endl; break;
            case 2: cout << "Result: " << cos(radians) << endl; break;
            case 3: cout << "Result: " << tan(radians) << endl; break;
            case 4:
                if (cos(radians) != 0)
                    cout << "Result: " << 1 / cos(radians) << endl;
                else
                    cout << "Error: sec(x) undefined for cos(x) = 0" << endl;
                break;
            case 5:
                if (sin(radians) != 0)
                    cout << "Result: " << 1 / sin(radians) << endl;
                else
                    cout << "Error: cosec(x) undefined for sin(x) = 0" << endl;
                break;
            case 6:
                if (tan(radians) != 0)
                    cout << "Result: " << 1 / tan(radians) << endl;
                else
                    cout << "Error: cot(x) undefined for tan(x) = 0" << endl;
                break;
            default:
                cout << "Invalid trigonometric choice!" << endl;
        }
    }

    else if (choice == 3) {
        int logChoice;
        double x;
        cout << "\n--- Logarithmic Function ---\n";
        cout << "1. log base e (ln)\n";
        cout << "2. log base 10\n";
        cout << "Enter choice (1 or 2): ";
        cin >> logChoice;
        cout << "Enter a positive number: ";
        cin >> x;
        if (x > 0) {
            if (logChoice == 1)
                cout << "Result (ln x): " << log(x) << endl;
            else if (logChoice == 2)
                cout << "Result (log10 x): " << log10(x) << endl;
            else
                cout << "Invalid log choice!" << endl;
        } else {
            cout << "Error: log(x) is undefined for x <= 0" << endl;
        }
    }

    else if (choice == 4) {
        int powChoice;
        double x, y;
        cout << "\n--- Power & Root Functions ---\n";
        cout << "1. Square Root (sqrt)\n";
        cout << "2. Power (x^y)\n";
        cout << "Enter choice (1 or 2): ";
        cin >> powChoice;

        if (powChoice == 1) {
            cout << "Enter number: ";
            cin >> x;
            if (x >= 0)
                cout << "Result: " << sqrt(x) << endl;
            else
                cout << "Error: sqrt(x) undefined for x < 0" << endl;
        }
        else if (powChoice == 2) {
            cout << "Enter base (x): ";
            cin >> x;
            cout << "Enter exponent (y): ";
            cin >> y;
            cout << "Result: " << pow(x, y) << endl;
        }
        else {
            cout << "Invalid power/root choice!" << endl;
        }
    }

    else {
        cout << "Invalid main choice!" << endl;
    }

    return 0;
}
