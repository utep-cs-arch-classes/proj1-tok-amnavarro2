#include <stdio.h>

#include "tokenizer.h"
#define LIMIT 100



int main(){
  char c;
  char str[LIMIT];
  // char *ptr;
  //char *first_word;
  
  int is_space = 0;
  int is_non_space = 0;
  int i = 0;
  int amount_words = 0;

  
  printf("ENTER YOUR INPUT: \n");
 
  while((c = getchar()) !='\n'){
    putchar(c);
    
    is_space = space_char(c);
    is_non_space = non_space_char(c);
    
    printf("\tis white space %d\n",is_space);
    printf("\tis non-white space %d\n", is_non_space);
    
    str[i] = c; //making a string of chars
    i++; //index for the string of chars
  }//end while
  str[i]='\0';
  
  printf("YOUR INPUT IS: %s\n",str);//print out the input as a string of characters.

  char *ptr = str;
  
  
 char* first_word = word_start(ptr);
  printf("The first word is: %s\n",first_word);
  // amount_words = count_words(ptr);
  // printf("%d\n", amount_words);
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


char *word_start(char *str){
  int i;
  char word[100];
  int count =0;
  char *first = word;
  
  for(i = 0; *(str+i) != '\0'; i++){
    if(*(str+i) == ' '){
      printf("first word is %s\n", word);
      return first;
    }
    
    word[i] = *(str+i);
    
  }//end for loop
  return first;
}//end word_start

int count_words(char *str){
  int i; 
  int count = 1; //Assuming we will have one word atleast
  
  for(i = 0; *(str+i)!='\0';i++){
    if(*(str+i) == ' '){ //Every time there's a space then we will count the spaces and get the amount of words from there
	count++;
      }
    }
  return count;
}//end count_words
