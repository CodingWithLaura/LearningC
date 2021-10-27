#include "lifo.h"

Lifo::Lifo() {
  this->top_item_ptr = nullptr;
}

Lifo::~Lifo(){
  while(this->top_item_ptr != nullptr) {
    this->wegnehmen();
  }
}

bool Lifo::isEmpty() {
  if(top_item_ptr == nullptr){
    return true;
  }
  return false;
}

void Lifo::draufpacken(std::string new_data){
  Datapackage* new_data_obj_ptr = new Datapackage(new_data);
  new_data_obj_ptr->next = this->top_item_ptr;
  this->top_item_ptr = new_data_obj_ptr;      
}

std::string Lifo::wegnehmen(){
  if(this->top_item_ptr == nullptr) {
    return "";
  }
  else
  {  
    Datapackage* hilfs_ptr = this->top_item_ptr;
    this->top_item_ptr = top_item_ptr->next;
    std::string result = hilfs_ptr->data;
    delete hilfs_ptr;
    return result;
  }  
}


