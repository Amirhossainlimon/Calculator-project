#include <iostream>
#include <string>
using namespace std;

int hexToDecimal(string n) {
    int ans = 0;
    int x = 1; // Multiplier for position (16^0, 16^1, ...)

    int s = n.size();
    for (int i = s - 1; i >= 0; i--) {
        if (n[i] >= '0' && n[i] <= '9') {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F') {
            ans += x * (n[i] - 'A' + 10);
        }
        else if (n[i] >= 'a' && n[i] <= 'f') { // Optional: handle lowercase
            ans += x * (n[i] - 'a' + 10);
        }
        x *= 16;
    }

    return ans;
}

int main() {
    string hex;
    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int decimal = hexToDecimal(hex);
    cout << "Decimal value: " << decimal << endl;

    return 0;
}
