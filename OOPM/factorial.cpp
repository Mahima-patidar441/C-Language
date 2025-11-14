#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial of a negative number doesn't exist.";
        return 0;
    }

    int result = factorial(n); 

    cout << "Factorial of " << n << " is " << result << endl;

    return 0;
}
