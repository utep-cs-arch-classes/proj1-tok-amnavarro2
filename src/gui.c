#include <stdio.h>
#include <stdlib.h>

#include "tokenizer.h"
#define LIMIT 100



int main(){
  char c;
  char str[LIMIT];
  // char str2 = "";
  char *first_word;
  char *last_word;
  char *copy;
  char **tokens;
  
  int is_space = 0;
  int is_non_space = 0;
  int i = 0;
  int j = 0;
  int amount_words = 0;

  
  printf("ENTER YOUR INPUT: \n");
  char *inStr = (char *)malloc(LIMIT);
  
  while((c = getchar()) !='\n'){
    putchar(c);
    
    is_space = space_char(c);
    is_non_space = non_space_char(c);
    
    printf("\tis white space %d\n",is_space);
    printf("\tis non-white space %d\n", is_non_space);
    
    str[i] = c; //making a string of chars
    *(inStr + i) = c; //making an allocated pointer that will be a string 
    i++; //index for the string of chars
  }//end while
  
  *(inStr +99) = '\0';
  str[i]='\0';
  printf("YOUR INPUT IS: %s\n",str);//print out the input as a string of characters.

  char *ptr = str;
  char *ptr2 =inStr;

  // printf("the string is: %s\n", inStr);
  
  first_word = word_start(ptr);
  printf("The first word is: %c\n",first_word);

  last_word = word_end(ptr);
  printf("The last word is: %c\n", last_word);
  // amount_words = count_words(ptr);
  // printf("%d\n", amount_words);

  copy = copy_str(ptr,2);
  printf("The copy string is: %s\n", copy);

  tokenize(ptr2);
  //for(j = 0; **(tokens + j) !="\0", j++){
    //printf("the token is %s\n", tokens[j]);
    // }//end while
  
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
  int i=0;
  
   for(i = 0; *(str+i) != '\0'; i++){
     if(*(str+i) != ' '){
      
       // printf("first word is %c\n", *str);
       return *(str+i);
     }
  }//end for loop
}//end word_start


char *word_end(char *str){
  int i = 0;
  
  for(i =0; *(str+i) != '\0'; i++){
      if(*(str+i+1) == '\0'){
	
	// printf("next letter is %c\n",*(str+i));
      return *(str+i);
      }//end if
  }//end for loop
}//end word_end


int count_words(char *str){
  int i; 
  int count = 1; //Assuming we will have one word atleast
  
  for(i = 0; *(str+i)!='\0';i++){
    if(*(str+i) == ' '){ //Every time there's a space then we will count the spaces and get the amount of words from there

       count++;
      }
  }//end for
  return count;
}//end count_words


char *copy_str(char *inStr, short len){
  int i=0;
  char *copy ="";

  copy = (char *)malloc(len);

  for(i = 0; i <= len; i++){
    *(copy+i) = *(inStr+i);
    //printf("the copy char is %c\n", *(copy+i));
  }
  //printf("The  final copy is %s\n", copy);

  return copy;

}//end copy_str


char **tokenize(char* str){
  int i = 0;
  int idx = 0;
  short distance = 0;
  int pos = 0;
  int amount_chars = 0;
  int count_tokens = 0;
  char *newStr;
  char **tokens;
  int size_holder[idx];
  count_tokens = count_words(str);
  int j = 0;;

  
  //this it to find the indexs of spaces between words.
   for(i = 0; *(str + i) != '\0'; i++){
     if(*(str+i) == ' '){
       pos = i;
       size_holder[idx] = pos;
       //printf("array where the spaces where found: %d\n ",size_holder[idx]);
       idx++;
     }//end if
     amount_chars++;
   }//end for loop
   amount_chars = amount_chars -1;




   //this loop is to calcutate the distance of a word to create a copy of str in order to tokenize it
   for (j = 0; j <idx; j++){
     //printf("value at index %d, %d\n", j, size_holder[j]);
    distance = (amount_chars - size_holder[j])-1;
    newStr = copy_str(str, distance);
   }//end for loop
   
   //newStr = copy_str(str, distance);
   printf("The new str is %s\n", newStr);


    
  printf("size of str in words %d\n",count_tokens);
  tokens = (char**) malloc(sizeof(char*)*(count_tokens+1));//the size of the tokenizer
  
}//end tokenize


//void free_tokens(char **tokens){
  //free(tokens);
//}//end free_tokens
