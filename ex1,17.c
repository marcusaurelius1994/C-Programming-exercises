/*
    Write a function reverse(s) which reverses the character
    string s. Use it to write a program which reverses its input a line at a time.
*/

#include <stdio.h>

#define MAXLINE 50

void reverse_line(char line[]);
int count_array(char arr[]);

int main(int argc, char * argv[]) {
    char c, line[MAXLINE];
    int i = 0;

    // Get user input and store it
    while(i < (MAXLINE - 1) && (c = getchar()) != EOF && c != '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    printf("Line: %s\n", line);

    // Count characters
    int count = count_array(line);

    // Reverse array
    reverse_line(line);

    printf("Reverse line: %s\n", line);

    return 0;
}

void reverse_line(char line[]) {
    char temp;
    int count = count_array(line);

    for(int i = 0; i < (count / 2); ++i) {
        temp = line[count - 1];
        line[count - 1] = line[i];
        line[i] = temp;
        --count;
    }
    
}

int count_array(char arr[]) {
    int count = 0;

    for(int i = 0; arr[i] != '\0'; ++i) ++count;

    return count;
}