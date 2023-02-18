#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* remove_char(char* dst, const char* src);


int main() {
    char* a = "Hello!";
    char* d = malloc(strlen(a) + 1);
    printf("a: %s\nd: %s\n", a, d);
    remove_char(d, a);
    printf("after: %s\n", d);
}

char* remove_char(char* dst, const char* src)
{
    /* your solution should return the string even if you use dst */
  strncpy(dst, src + 1, strlen(src)-2);
  *(dst + strlen(src) - 2) = '\0';

  return dst;
}