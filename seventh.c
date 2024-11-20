#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
int main() {
    struct Complex num1, num2, result;
    num1.real = 3.4;
    num1.imag = 5.6;
    num2.real = 1.2;
    num2.imag = 4.8;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    printf("Sum = %f + %f\n", result.real, result.imag);

    return 0;
}
