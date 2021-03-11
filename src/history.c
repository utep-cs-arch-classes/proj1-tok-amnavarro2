#include <stdio.h>
#include <stdlib.h>
#include "history.h"


//int main(){
//List *list = init_history();
// add_history(list, "hello");
// add_history(list, "world");
//add_history(list, "are you good");
  
//print_history(list);

//char *hist = get_history(list, 1);
//printf("the word is: %s\n",hist);

//free_history(list);
//printf("the list is: %s\n",list);
}//end main


List *init_history(){
  List *list = NULL;
  list = malloc(sizeof(List)*1);

  Item *item = NULL;
  item = malloc(sizeof(Item)*1);

  //declaring the variables for our list and item structure.
  list -> root = item;
  item -> id = 0;
  item -> str ="";
  item -> next = NULL;
  return list;

}//end init_history

void add_history(List *list, char *str){
  Item *temp = list->root; //making a copy of of current item in the root so we don't lose it
  int count = 1;

  //NEED THIS STATEMENT IF NOT THE ZERO NODE WILL NOT BE POPULATED!!!
  if(temp->id == 0){ //if we have nothing in our list then we populate the first node
    
    temp->id = count;
    temp-> str = str;
    return; //need to return the root cause if not we will repeat the root twice in our output.

  }//end if
  
  while(temp->next != NULL){//just to count and traverse the nodes that we have in the list.
    temp = temp->next;
    count++;
  }//end while

  temp->next = malloc(sizeof(Item));//allocate memory for the next node in the list.
  
  temp->next->id = count+1;//indicate the next value of id.
  temp->next->str = str; //insert the str in the next node.
  temp->next->next = NULL;//make the next-next node null, but in this case it would be the last position.
}//end add_history


void print_history(List *list){
  Item *temp = list->root;//keep our head safe
  
  while(temp != NULL){
    printf("the id is: %d and the word is: %s \n", temp->id, temp->str);
    temp = temp->next;// point to the next item in our list
    
  }//end while
  
}//end print_history

char *get_history(List *list, int id){
  Item *temp = list->root;

  while(temp != NULL){
    if(temp->id == id){//if the id in our current position is the same as the id we want then we return the str in that position.
      return temp->str;
    }
    temp = temp->next;
  }

  return NULL; //return NULL if the id doesn't exist.
}//end get_history


void free_history(List *list){
  free(list);
}//end free_history
