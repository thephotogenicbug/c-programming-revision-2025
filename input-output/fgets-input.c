#include <stdio.h>

int main()
{

    char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name, sizeof(full_name), stdin); // Reads up to sizeof(full_name) characters from stdin and stores them in full_name

    printf("Your full name is: %s", full_name);
    return 0;
}