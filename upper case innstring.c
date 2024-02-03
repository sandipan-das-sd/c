#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
	int i;
    for ( i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
           str[i] = str[i] + ('a' - 'A');
        }
    }

    printf("Converted string: %s\n", str);

    return 0;
}

