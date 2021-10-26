#include "fifo.h"

Fifo::Fifo() {
  this->first = nullptr;
  this->last = nullptr;
}

Fifo::~Fifo() {
  while(this->first != nullptr) {
    Datapackage* help = this->first;
    this->first = help->next;
    delete(help);
  }
}

std::string Fifo::abhabsen() {
  if(this->first == nullptr)
    return "";
  else { // da is was
    std::string ausgabe = this->first->data;
    Datapackage* hilf = this->first->next;
    if(this->first == this->last) {
      delete(this->first);
      this->first = nullptr;
      this->last = nullptr;
    }
    else
    {
      delete(this->first);
      this->first = hilf;
    }
    return ausgabe;
  }
}

void Fifo::dranflanschen(std::string new_data) {
  Datapackage* new_data_obj = new Datapackage(new_data);
  if(this->last == nullptr) {
    this->last = new_data_obj;
    this->first = new_data_obj;
  }
  else {
    this->last->next = new_data_obj;
    this->last = new_data_obj;
  }  
}
  
bool Fifo::empty() {
  if(this->first == nullptr)
    return true;
  return false;     
}
