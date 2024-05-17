#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int binaryToDecimal(const string& binaryStr) {
    int decimal = 0;
    int length = binaryStr.length();
    for (int i = 0; i < length; i++) {
        if (binaryStr[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}
int main() {
    string binaryStr;
    cout << "Enter a binary number: ";
    cin >> binaryStr;
    int decimal = binaryToDecimal(binaryStr);
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
