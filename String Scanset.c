#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^0123456789]", str);
    printf("%s", str);

    return 0;
}

