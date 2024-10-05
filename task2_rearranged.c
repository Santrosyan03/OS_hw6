#include <stdio.h>

struct MyStruct {
    double a;
    char b;
    int c;
};

int main() {
    struct MyStruct s;
    printf("Size of struct: %lu bytes\n", sizeof(s));
    printf("Address of a: %p\n", (void*)&s.a);
    printf("Address of b: %p\n", (void*)&s.b);
    printf("Address of c: %p\n", (void*)&s.c);
    return 0;
}
