#include <iostream>
using namespace std;

int main() {
    int sumEven = 0;
    int sumOdd = 0;

    for(int i = 1; i <= 10; i++) {
        sumEven += 2 * i;     
    }

    for(int i = 1; i <= 10; i++) {
        sumOdd += (2 * i - 1); 
    }

    cout << "Sum of first 10 even numbers = " << sumEven << endl;
    cout << "Sum of first 10 odd numbers  = " << sumOdd << endl;

    return 0;
}
