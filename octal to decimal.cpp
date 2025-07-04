#include <iostream>
using namespace std;

int octalToDecimal(int n) {
    int ans = 0;
    int x = 1;

    while (n > 0) {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a octal number: ";
    cin >> n;

    int decimal = octalToDecimal(n);
    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
