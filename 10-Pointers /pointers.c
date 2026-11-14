#include <stdio.h>

int main()
{
    int age = 16;

    int *ptr = &age;

    printf("Age: %d\n", age);
    printf("Address: %p\n", &age);
    printf("Pointer value: %d\n", *ptr);

    return 0;
}
