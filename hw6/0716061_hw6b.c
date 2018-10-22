#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*  Input  : String (char array) 
 *  Output : 1 if the string is a valid name, 0 otherwise
 */
int validateName(char* name) {
    for (int i = 0; i < strlen(name); i++) {
        if (!isalpha(name[i])) {
            return 0;
        }
    }

    return 1;
}

/*  Input  : String (char array) 
 *  Output : 1 if the string is a valid age, 0 otherwise
 */
int validateAge(char* age) {
    for (int i = 0; i < strlen(age); i++) {
        if (!isdigit(age[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    if (validateName(str1) == 1)
        printf("Name ");
    else
        printf("None ");
    if (validateAge(str2) == 1)
        printf("Age");
    else
        printf("None");

    return 0;
}