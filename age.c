#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("What's your age: ");
    printf("You are at least %i days old\n", age*365);
}
