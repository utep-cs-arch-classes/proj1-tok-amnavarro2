#include <stdio.h>
#include <stdlib.h>
#include "history.h"


int main(){
  List *list = init_history();


  
}//end main


List *init_history(){
  List *list = NULL;
  list = malloc(sizeof(List));

  Item *item = NULL;
  item = malloc(sizeof(Item));

  list -> root = item;
  item -> id = 0;
  item -> str ="";
  item -> next = NULL;
  return list;

}//end init_history
