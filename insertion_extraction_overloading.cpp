#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& c) {
        if (c.imaginary >= 0)
            out << c.real << " + " << c.imaginary << "i";
        else
            out << c.real << " - " << -c.imaginary << "i";
        return out;
    }

    friend std::istream& operator>>(std::istream& in, ComplexNumber& c) {
        std::cout << "Enter real part: ";
        in >> c.real;
        std::cout << "Enter imaginary part: ";
        in >> c.imaginary;
        return in;
    }
};

int main() {
    ComplexNumber c1(2, 3);
    ComplexNumber c2(1, -4);

    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;

    ComplexNumber c3(0, 0);
    std::cout << "Enter a complex number (real imaginary): ";
    std::cin >> c3;
    std::cout << "You entered: " << c3 << std::endl;

    return 0;
}
