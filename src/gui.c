#include <stdio.h>
#include "tokenizer.h"
#define LIMIT 100



int main(){
  char c;
  char s[LIMIT];
  int is_space = 0;
  int is_non_space = 0;
  int i = 0;

  
  printf("ENTER YOUR INPUT: \n");
 
  while((c = getchar()) !='\n'){
    putchar(c);
    
    is_space = space_char(c);
    is_non_space = non_space_char(c);
    printf("\tis white space %d\n",is_space);
    printf("\tis non-white space %d\n", is_non_space);
    
    //s[i] = c; //making a string of chars
    //i++; //index for the string of chars
  }//end while

  
  // printf("YOUR INPUT IS: %s\n",s);
  // is_space = space_char(c);
  // printf("is there a white space? %d\n", is_space);
  // is_non_space = non_space_char(c);
  // printf("is there a non-white space? %d\n",is_non_space);
  
  // Original Idea with scanner SCRAP!
  // printf("Enter your input: ");
  // scanf("%d",&c);

  // space_char(c);
  // non_space_char(c);
}//end main



int space_char(char c){
  if(c == ' ' || c == '\t'|| c =='\n')
    return 1;
  else
    return 0;
}//end space_char


int non_space_char(char c){
  //if(c != ' '|| c != '\t'|| c != '\n')
  if(c!=' ')
   return 1; //returns true
  else
    return 0; //returns false
}//end non_space_char
