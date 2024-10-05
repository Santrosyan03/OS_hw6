#include <stdio.h>

int main() {
    int integerVariable;
    char characterVariable;
    double doubleVariable;
    short shortVariable;
    printf("Size of integerVariable: %lu bytes\n", sizeof(integerVariable));
    printf("Size of characterVariable: %lu byte\n", sizeof(characterVariable));
    printf("Size of doubleVariable: %lu bytes\n", sizeof(doubleVariable));
    printf("Size of shortVariable: %lu bytes\n\n", sizeof(shortVariable));
    printf("Address of integerVariable: %p\n", (void*)&integerVariable);
    printf("Address of characterVariable: %p\n", (void*)&characterVariable);
    printf("Address of doubleVariable: %p\n", (void*)&doubleVariable);
    printf("Address of shortVariable: %p\n", (void*)&shortVariable);
    return 0;
}
