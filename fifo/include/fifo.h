#include <string>
#include <memory>


class Datapackage {
public:
  Datapackage(std::string new_data) {
    data = new_data;
    next = nullptr;
  }
  void point_to(Datapackage* new_next)
  {
    next = new_next;
  }
  //private:
  std::string data;
  Datapackage* next;
};

class Fifo {
public:
  Fifo();
  ~Fifo();     
  std::string abhabsen();
  void dranflanschen(std::string new_data);
  bool empty();
private:  
  // data
  Datapackage* first;
  Datapackage* last;
};

/*
set -> [.....Data.....] -> get

eigentlich:links abhabsen rechts hinzufügen
     first (abhabsen)                                                                                           last
      v                                                                                                         v  (hier dran)
    [string]->[string]->[string]->[string]->[string]->[string]->[string]->[string]->[string]->[string]-> [string]  []->nullptr
                A                                                                                             next->    
                |
               hilf
   mit dynamischen Speicher
[später Ringbuffer]

first    last
   [string]
 */
