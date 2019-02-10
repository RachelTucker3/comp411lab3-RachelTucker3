/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

  int y = 0;
  char lol[MAX], q;
  for(i = 0; i <= length; i++) {
	if(isspace(text[i])){

	}else if(ispunct(text[i])) {

	}else if(isalpha(text[i])) {
	  lol[y] = tolower(text[i]);
	  y++;
	}

  }

  lol[y] = text[length+1];

  int w = 0;
  char wow[MAX], g;
  for(i = 0; i <= length; i++) {
	if(isspace(plachold[i])) {

        }else if(ispunct(plachold[i])) {

        }else if(isalpha(plachold[i])) {
          wow[w] = tolower(plachold[i]);
          w++;
        }
  }

  wow[w] = text[length +1];

  int nlength = strlen(lol)-1;


  for(i = 0; i <= nlength; i++) {
	if(wow[i] != lol[i]) {
	  break;
	}
	if(i == nlength) {
	  if(wow[i] == lol[i]) {
	    printf("Found a palindrome!\n");
	  } else {
		break;
	  }
	}
  }
}
