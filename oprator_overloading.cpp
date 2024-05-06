#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;
    
public:
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}
    
    void display() const {
        if (imaginary >= 0)
            std::cout << real << " + " << imaginary << "i";
        else
            std::cout << real << " - " << -imaginary << "i";
    }
    
    ComplexNumber operator+(const ComplexNumber& other) const {
        double real_part = real + other.real;
        double imaginary_part = imaginary + other.imaginary;
        return ComplexNumber(real_part, imaginary_part);
    }
    
    ComplexNumber operator-(const ComplexNumber& other) const {
        double real_part = real - other.real;
        double imaginary_part = imaginary - other.imaginary;
        return ComplexNumber(real_part, imaginary_part);
    }
};

int main() {
    ComplexNumber c1(2, 3);
    ComplexNumber c2(1, 4);

    std::cout << "c1 = ";
    c1.display();
    std::cout << std::endl;

    std::cout << "c2 = ";
    c2.display();
    std::cout << std::endl;

    std::cout << "c1 + c2 = ";
    (c1 + c2).display();
    std::cout << std::endl;

    std::cout << "c1 - c2 = ";
    (c1 - c2).display();
    std::cout << std::endl;

    return 0;
}
