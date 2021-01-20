#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("what's your name?\n");
    printf("hello, %s\n", answer);
}

/*
    clang -o name name.c -lcs50
*/
