 #include <stdio.h>
#include <string.h>

int main() {
    // 1. strcpy
    char dest1[20];
    char src1[] = "Hello";
    strcpy(dest1, src1);
    // Input: src1 = "Hello"
    // Output: dest1 = "Hello"

    // 2. strlen
    char str2[] = "Hello";
    size_t len = strlen(str2);
    // Input: str2 = "Hello"
    // Output: len = 5

    // 3. strcat
    char dest2[20] = "Hi ";
    char src2[] = "there";
    strcat(dest2, src2);
    // Input: dest2 = "Hi ", src2 = "there"
    // Output: dest2 = "Hi there"

    // 4. strcmp
    char str3a[] = "abc", str3b[] = "abd";
    int cmp = strcmp(str3a, str3b);
    // Input: str3a = "abc", str3b = "abd"
    // Output: cmp < 0 (-1)

    // 5. strncpy
    char dest3[20];
    char src3[] = "HelloWorld";
    strncpy(dest3, src3, 5);
    dest3[5] = '\0';
    // Input: src3 = "HelloWorld", n = 5
    // Output: dest3 = "Hello"

    // 6. strncmp
    char str4a[] = "abcdef", str4b[] = "abcxyz";
    int cmp2 = strncmp(str4a, str4b, 3);
    // Input: str4a = "abcdef", str4b = "abcxyz", n = 3
    // Output: cmp2 = 0

    // 7. strncat
    char dest4[20] = "Hi ";
    char src4[] = "there";
    strncat(dest4, src4, 3);
    // Input: dest4 = "Hi ", src4 = "there", n = 3
    // Output: dest4 = "Hi the"

    // 8. strchr
    char str5[] = "Hello";
    char ch1 = 'l';
    char *p1 = strchr(str5, ch1);
    // Input: str5 = "Hello", ch1 = 'l'
    // Output: p1 points to "llo"

    // 9. strrchr
    char str6[] = "Hello";
    char ch2 = 'l';
    char *p2 = strrchr(str6, ch2);
    // Input: str6 = "Hello", ch2 = 'l'
    // Output: p2 points to "lo"

    // 10. strstr
    char str7[] = "HelloWorld";
    char sub1[] = "World";
    char *p3 = strstr(str7, sub1);
    // Input: str7 = "HelloWorld", sub1 = "World"
    // Output: p3 points to "World"

    // 11. strcspn
    char str8[] = "abcdef";
    char set1[] = "dx";
    size_t n = strcspn(str8, set1);
    // Input: str8 = "abcdef", set1 = "dx"
    // Output: n = 4

    // 12. strtok
    char str9[] = "Hi,there,friend";
    char delim[] = ",";
    char *token = strtok(str9, delim);
    // Input: str9 = "Hi,there,friend", delim = ","
    // Output: tokens: ["Hi"], ["there"], ["friend"]

    return 0;
}