/* Note:
    Allocate memory yourself!
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *dna_strand(const char *dna);

int main(void) {
    char *str = dna_strand("ATGC");
    printf("%s", str);
}

char *dna_strand(const char *dna)
{
  int len = strlen(dna);
  char *dna_strand = (char *)malloc(len + 1);
  for (int i = 0; i < len; i++){
    switch (*(dna + i)){
        case 'A':
          *(dna_strand + i) = 'T';
          break;
        case 'T':
          *(dna_strand + i) = 'A';
          break;
        case 'G':
          *(dna_strand + i) = 'C';
          break;
        case 'C':
          *(dna_strand + i) = 'G';
          break;
    }
  }
  *(dna_strand + len) = '\0';
  return dna_strand;
}