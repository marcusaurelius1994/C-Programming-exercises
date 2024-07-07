/*
    Write the function any(s1, s2) which returns the first location
    in the string s1 where any character from the string s2 occurs, 
    or -1 if s1 contains no characters from s2.
*/

#include <stdio.h>

int any(char s1[], char s2[]);

int main(int argc, char *argv[]) {

   char s1[] = "This is the z string";
   char s2[] = "New string";
   int index;


   index = any(s1, s2);

   printf("String: %s\n", s1);

   if(index >= 0) printf("Found match at letter %d (index %d).\n", index + 1, index);
   else printf("Nothing found!\n");

    return 0;
}

int any(char s1[], char s2[]) {
    int i, j;

    for(i = 0; s1[i] != '\0'; ++i) {
        for(j = 0; s2[j] != '\0'; ++j) {
            if(s1[i] == s2[j]) return i;
        }
    }

    return -1;

}