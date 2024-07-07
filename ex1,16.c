/*
    Write a program to remove trailing blanks and tabs
    from each line of input, and to delete entirely blank lines.
*/

#include <stdio.h>

#define MAXLINE 50

void remove_chars(char arr[], int limit);

int main(int argc, char * argv[]) {

    char c, line[MAXLINE];
    int i = 0, count = 0;

    // Get user input and save it to array
    while((c = getchar()) && i < MAXLINE && c != '\n') {
        line[i] = c;
        ++i;
    }
        
    line[i] = '\0';

    remove_chars(line, MAXLINE);

    printf("line: %s\n", line);

    return 0;
}

void remove_chars(char arr[], int limit) {
    char temp[limit];
    int j = 0;

    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] != '\t' && arr[i] != ' ') {
            temp[j] = arr[i];
            ++j;
        }
            
    }

    temp[j] = '\0';

    printf("Temp: %s\n", temp);

    j = 0;
    while((arr[j] = temp[j]) != '\0') ++j;
}