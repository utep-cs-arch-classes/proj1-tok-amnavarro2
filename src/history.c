#include <stdio.h>
#include <stdlib.h>
#include "history.h"


//int main(){
  // List *list = init_history();
  //add_history(list, "hello");
  //add_history(list, "world");
  //add_history(list, "are you good");
  
  // print_history(list);
  
//}//end main


List *init_history(){
  List *list = NULL;
  list = malloc(sizeof(List)*1);

  Item *item = NULL;
  item = malloc(sizeof(Item)*1);

  list -> root = item;
  item -> id = 0;
  item -> str ="";
  item -> next = NULL;
  return list;

}//end init_history

void add_history(List *list, char *str){
  Item *temp = list->root; //making a copy of of current item in the root so we don't lose it

  int count = 1;

  
  if(temp->id == 0){ //if we have nothing in our list then we add the id value and the str to the first position.
  temp->id = count;
  temp-> str = str;
  return;
  }//end if
  
  while(temp->next != NULL){
    temp = temp->next;
    count++;
  }//end while

  temp ->next = malloc(sizeof(Item));//allocate memory for the next position in the list.
  temp->next->id = count+1;//indicate the next value of the id.
  temp->next->str = str;
  temp->next->next = NULL;
}//end add_history






void print_history(List *list){
  Item *temp = list->root;//keep our head safe
  
  while(temp != NULL){
    printf("the id is: %d and the word is: %s \n", temp->id, temp->str);
    temp = temp->next;// point to the next item in our list
    
  }//end while
  
}//end print_history
