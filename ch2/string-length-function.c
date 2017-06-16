#include <stdio.h>

int main()
{
    char name[] = "Colton Hurst";
    printf("Length: %d", strlen(name));
    return 0;
}

/* strlen: return length of s */
int strlen(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
