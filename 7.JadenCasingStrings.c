#include <ctype.h>


char *to_jaden_case (char *jaden_case, const char *string)
{
// write to jaden_case and return it
	int i = 0;
  while (*(string + i) != '\0'){
    if (i == 0){
      *(jaden_case + i) = toupper(*(string + i));
    }
    else{
      *(jaden_case + i) = *(string + i);
      if (*(string + i) == ' '){
        *(jaden_case + i + 1) = toupper(*(string + i + 1));
        i++;
      }
    }
    i++;
  }

  *(jaden_case + i) = '\0';
	return jaden_case;
}