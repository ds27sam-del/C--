#include <iostream>
using namespace std;

// ==== Function Declarations ====
void hello_world();
void Address();
void printResume();
void Array_1();
void Array_2();
int Sum_1();
int f_no();
void percentage();
void swap_3();
void Arithmetic_O();
void right_t();
void star_shape();

// ==== Main Function ====
int main() {
    int choice;
    do {
        cout << "\n===== Project Menu =====" << endl;
        cout << "1. Hello World" << endl;
        cout << "2. Address" << endl;
        cout << "3. Resume" << endl;
        cout << "4. Print 1D Array" << endl;
        cout << "5. Print 2D Array" << endl;
        cout << "6. Sum of 2 Numbers" << endl;
        cout << "7. Factorial" << endl;
        cout << "8. Percentage of 7 Subjects" << endl;
        cout << "9. Swap using 3rd Variable" << endl;
        cout << "10. Arithmetic Operations" << endl;
        cout << "11. Right Angle Triangle" << endl;
        cout << "12. Star Shape" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: hello_world(); break;
            case 2: Address(); break;
            case 3: printResume(); break;
            case 4: Array_1(); break;
            case 5: Array_2(); break;
            case 6: cout << "Sum = " << Sum_1() << endl; break;
            case 7: f_no(); break;
            case 8: percentage(); break;
            case 9: swap_3(); break;
            case 10: Arithmetic_O(); break;
            case 11: right_t(); break;
            case 12: star_shape(); break;
            case 0: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice, try again!" << endl;
        }
    } while (choice != 0);

    return 0;
}

// ==== Function Definitions ====
void hello_world() {
    cout << "Hello world" << endl;
}

void Address() {
    cout << "Vill.Raditana PO Subathu Solan H.P" << endl;
}

void printResume() {
    cout << "===== Resume =====" << endl;
    cout << "Name: Saumya Kumar" << endl;
    cout << "\nSkills:" << endl;
    cout << "- Python" << endl;
    cout << "- Frontend Development (HTML, CSS, JavaScript)" << endl;
    cout << "- SQL" << endl;
    cout << "- C Language" << endl;
    cout << "- Canva" << endl;
    cout << "\nExperience:" << endl;
    cout << "2 years of hands-on experience in all listed skills." << endl;
}

void Array_1() {
    int ar1[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << ar1[i] << endl;
    }
}

void Array_2() {
    int ar2[2][5] = {
        {10, 20, 30, 40, 50},
        {5, 4, 3, 2, 1}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << ar2[i][j] << "\t";
        }
        cout << endl;
    }
}

int Sum_1() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a + b;
}

int f_no() {
    int c;
    int fact = 1;
    cout << "Enter the number: ";
    cin >> c;
    for (int i = c; i > 0; i--) {
        fact *= i;
    }
    cout << "Factorial is: " << fact << endl;
    return fact;
}

void percentage() {
    int r, sum = 0;
    for (int i = 1; i <= 7; i++) {
        cout << "Enter your marks " << i << ": ";
        cin >> r;
        sum += r;
    }
    double percent = (sum / 700.0) * 100;
    cout << "The percentage is: " << percent << "%" << endl;
}

void swap_3() {
    int a = 10, b = 20, temp;
    cout << "Before swap: a=" << a << " b=" << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap: a=" << a << " b=" << b << endl;
}

void Arithmetic_O() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << (float)a / b << endl;
    cout << "Modulus: " << a % b << endl;
}

void right_t() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void star_shape() {
    int n = 9; // odd number works best
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n/2 || j == n/2 || i == j || i + j == n-1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
