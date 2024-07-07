/*
    Write the function htoi(s), which converts a string
     of hexadecimal digits into its equivalent integer value.
     The allowable digits are 0 through 9, a through f, and A through F.
*/

#include <stdio.h>

#define LIMIT 50

int hextoint(char arr[]);

int main(int argc, char *argv[]) {

    char hex[] = "4FE8";
    char c = 'A';

    printf("HEX: %s\n", hex);

    int conversion = hextoint(hex);

    printf("Converted to INT: %d", conversion);

    return 0;
}

int hextoint(char arr[]) {
    int i = 0, result = 0, value;

    while(arr[i] != '\0'){
        if(arr[i] >= '0' && arr[i] <= '9')
            value = arr[i] - '0';
        else if(arr[i] >= 'a' && arr[i] <= 'f')
            value = arr[i] - 'a' + 10;
        else if(arr[i] >= 'A' && arr[i] <= 'F')
            value = arr[i] - 'A' + 10;
        else {
            printf("The character %c is not valid!\n", arr[i]);
            break;
        }
        ++i;
        result = result * 16 + value;
    }

    return result;

}