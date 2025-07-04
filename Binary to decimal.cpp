#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int ans = 0;
    int x = 1;

    while (n > 0) {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    int decimal = binaryToDecimal(n);
    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
