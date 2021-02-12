#include <stdio.h>
#include "tokenizer.h"
#define LIMIT 100

int main(){
  char c;
  char s[LIMIT];
  printf("ENTER YOUR INPUT: \n");
  
  int i = 0;
  while((c = getchar()) !='\n'){
    //space_char(c);
    s[i] = c;
    i++;
    //putchar(c);
    }

  printf("YOUR INPUT IS: %s\n",s);
  int result = space_char(c);
  printf("is there a white space? %d\n", result);
  
  //Original Idea with scanner
  // printf("Enter your input: ");
  // scanf("%d",&c);

  //space_char(c);
}

int space_char(char c){
  if(c == ' '|| c == '\t'|| c == '\n'){
    return 1;
  }
  return 0;


}//end space_char

int non_space_char(char c){
  if(c!= ' '|| c!= '\t' || c == '\n'){

  }
}//end non_space_char
