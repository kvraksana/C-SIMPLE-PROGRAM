PROGRAM:
#include <iostream>
using namespace std;

class Calculator {
public:
    // Function overloading for calculate()
    int calculate(int a, int b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': 
                if (b == 0) {
                    cout << "Error: Divide by zero!" << endl;
                    return 0;
                }
                return a / b;
            default:
                cout << "Invalid operator!" << endl;
                return 0;
        }
    }

    double calculate(double a, double b) {
        if (b == 0) {
            cout << "Error: Divide by zero!" << endl;
            return 0;
        }
        return a / b;
    }

    int calculate(int a) {
        return a * a;
    }
};

int main() {
    Calculator calc;
    int choice;

    while (true) {
        cout << "1. Basic Operations (+, -, *, /)\n";
        cout << "2. Double Division\n";
        cout << "3. Square of Number\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int a, b;
                char op;
                cout << "Enter two numbers and operator: ";
                cin >> a >> b >> op;
                cout << "Result: " << calc.calculate(a, b, op) << endl;
                break;
            }
            case 2: {
                double a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << calc.calculate(a, b) << endl;
                break;
            }
            case 3: {
                int a;
                cout << "Enter a number: ";
                cin >> a;
                cout << "Square: " << calc.calculate(a) << endl;
                break;
            }
            case 4:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
SAMPLE OUTPUT
1. Basic Operations (+, -, *, /)
2. Double Division
3. Square of Number
4. Exit
Enter choice: 1
Enter two numbers and operator: 10 5 +
Result: 15
1. Basic Operations (+, -, *, /)
2. Double Division
3. Square of Number
4. Exit
Enter choice: 2
Enter two numbers: 10.5 2.5
Result: 4.2
1. Basic Operations (+, -, *, /)
2. Double Division
3. Square of Number
4. Exit
Enter choice: 3
Enter a number: 5
Square: 25
1. Basic Operations (+, -, *, /)
2. Double Division
3. Square of Number
4. Exit
Enter choice: 4