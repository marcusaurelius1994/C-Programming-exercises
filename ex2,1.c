/*
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
     s[i] = c;

    Write a loop equivalent to the for loop above without using &&.
*/

#include <stdio.h>

#define MAXLIMIT 50

int main(int argc, char *argv[]) {
    char c, line[MAXLIMIT];

    for(int i = 0; i < MAXLIMIT - 1; ++i) {
        if((c = getchar()) != '\n')
            line[i] = c;
        else {
            line[i] = '\0';
            break;
        }
    }


    printf("%s\n", line);

    return 0;
}