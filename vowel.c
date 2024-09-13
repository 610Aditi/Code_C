#include <stdio.h>
int main()
{
    char check;
    printf("enter the character = ");
    scanf("%c", &check);
    switch (check)
    {
        case 'A':
        printf("A is vowel");
        break;
        case 'E':
        printf("E is vowal");
        break;
        case'I':
        printf("I is vowal");
        break;
        case 'O':
        printf("is vowel");
        break;
        case 'U':
        printf(" U is vowel");
        break;
        case 'a':
        printf("a is vowel");
        break;
        case 'e':
        printf("e is vowel");
        break;
        case 'i':
        printf("i is vowel");
        break;
        case 'o':
        printf("o is vowel");
        break;
        case 'u':
        printf("u is vowel");
        break;
        default:
        printf("consonant");

    }
    return 0;
}
