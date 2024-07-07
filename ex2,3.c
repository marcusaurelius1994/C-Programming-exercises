/*
    Write an alternate version of squeeze(s1, s2) which deletes 
    each character in s1 which matches any character in the string s2.
*/

#include <stdio.h>

void any(char arr[], char match[], char new[]);

int main(int argc, char *argv[]) {

    char str[] = "This is the string";
    char match[] = "stge";
    char newstr[50];

    any(str, match, newstr);

    printf("String: %s\n", str);
    printf("New String: '%s'\n", newstr);

    int count = 0;

    return 0;
}

void any(char arr[], char match[], char new[]) {
    int k = 0;

    for(int i = 0; arr[i] != '\0'; ++i) {
        int flag = 0;
        for(int j = 0; match[j] != '\0'; ++j) {
            if(arr[i] == match[j]) {
                flag = 1;
                break;
            }
        }

        if(!flag) new[k++] = arr[i];
    }

}