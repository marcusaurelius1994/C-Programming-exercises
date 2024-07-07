/*
    Write a program to print all lines that are longer than 5 characters.
*/

#include <stdio.h>

#define MAXLINE 50
int count_lines(char arr[], int limit);

int main(int argc, char * argv[]) {
    
    char c, line[MAXLINE];
    int i = 0;

    // Write to line
    while((c = getchar()) && i < MAXLINE && c != '\n') {
        line[i++] = c;
    }

    line[++i] = '\0';

    // Count and print
    int count = count_lines(line, MAXLINE);

    if(count <= 5)
        printf("%s", line);
    
    return 0;
}

int count_lines(char arr[], int limit) {
    int i = 0;

    while(arr[i] != '\0')
        i++;

    return i;
}