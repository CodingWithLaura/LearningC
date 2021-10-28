#include "lifo_c.h"
#include <stdlib.h>
#include <string.h>

Datapackage* newDatapackage(char* new_data) {
  Datapackage* this = malloc(sizeof(Datapackage));
  strncpy(this->data, new_data, 15);
  this->data[15] = 0;
  this->next = NULL;
  return this;
}

Lifo_c* newLifo_c() {
  Lifo_c* this = malloc(sizeof(Lifo_c));
  this->top_item_ptr = NULL;    
  return this;
}

void delLifo_c(Lifo_c* this) {
  while(this->top_item_ptr != NULL) {
    wegnehmen(this);
  }
  free(this);
}
             
bool isEmpty(Lifo_c* this){
  if(this->top_item_ptr == NULL) {
    return true;
  }
  return false;
}

void draufpacken(Lifo_c* this, char* new_data) {
  Datapackage* new_data_obj_ptr = newDatapackage(new_data);
  new_data_obj_ptr->next = this->top_item_ptr; 
  this->top_item_ptr = new_data_obj_ptr;
}

char* wegnehmen(Lifo_c* this) {
  char* result_string = malloc(16*sizeof(char));
  if(this->top_item_ptr == NULL) {
    result_string[0] = 0;
    return result_string;
  }
  else
  {
    Datapackage* hilfs_ptr = this->top_item_ptr;
    this->top_item_ptr = this->top_item_ptr->next;
    strncpy(result_string, hilfs_ptr->data, 16);
    free(hilfs_ptr);
    return result_string;
  }  
}
    

    

       
    

