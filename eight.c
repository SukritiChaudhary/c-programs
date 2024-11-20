#include <stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    union Data type;
    type.i = 10;
    printf("%d\n", type.i);
    type.f = 220.5;
    printf("%f\n", type.f);
    sprintf(type.str,"helloworld");
    printf("%s\n", type.str);
    return 0;
}
