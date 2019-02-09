/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], c;
  int i;
  int length;
  char plachold[MAX], r;
  
  printf("Type some text (then ENTER):\n");
  
  /* Save typed characters in text[]: */
    
  fgets( text, MAX, stdin);
  length = strlen(text) - 1;
  
  /* Analyse contents of text[]: */
    int x = 0;
  for (i = length-1; i >= 0; i--)
  {
      plachold[x] = text[i];
      x++;
  }

  plachold[x] = text[length+1];
  
  printf("Your input in reverse is:\n");
  printf("%s\n", plachold);

  for(i = 0; i < length; i++) {
	if(plachold[i] != text[i]) {
	  break;
	}
	if(i == length - 1) {
	  if(plachold[i] == text[i]) {
	    printf("Found a palindrome!\n");
	  } else {
		break;
	  }
	}
  }
}
