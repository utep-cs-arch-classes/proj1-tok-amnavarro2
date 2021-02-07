#include <stdio.h>
#include "tokenizer.h"

int main(){
  char c;
  // c = getchar();
  printf("Enter your input: ");
  scanf("%d",&c);

  space_char(c);
}

int space_char(char c){
  if(c == ' '){
    return true;
  }


}//end space_char

int non_space_char(char c){

}
