#include <stdio.h>
#include <stdlib.h>

int main()
{
    Hi("Nats", 18);
    Hi("Mike", 20);
    Hi("Popoy", 23);
    return 0;
}
void Hi(char name[], int age)
{
    printf("Hello %s, and you are %d\n", name, age);
}
