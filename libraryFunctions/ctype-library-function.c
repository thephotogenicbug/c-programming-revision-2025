#include <stdio.h>
#include <ctype.h>

int main()
{
    char alpha = 'e';
    char upperCase = toupper(alpha);
    printf("%c\n", upperCase);
    char lowerCase = tolower(alpha);
    printf("%c\n", lowerCase);
    return 0;
}