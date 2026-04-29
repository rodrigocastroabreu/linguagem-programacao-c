#include <stdio.h>
#include <string.h>

// Comparação de strings
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n\n", str3);
    
    if (strcmp(str1, str2) == 0) {
        printf("str1 é igual a str2\n");
    } else {
        printf("str1 é diferente de str2\n");
    }
    
    if (strcmp(str1, str3) == 0) {
        printf("str1 é igual a str3\n");
    } else {
        printf("str1 é diferente de str3\n");
    }
    
    return 0;
}
