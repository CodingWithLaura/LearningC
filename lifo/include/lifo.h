#include <string>

class Datapackage {
public:
  Datapackage(std::string new_data) {
    data = new_data;
    next = nullptr;
  }

  std::string data;
  Datapackage* next;
};

class Lifo {
public:
  Lifo();
  ~Lifo();
  void draufpacken(std::string new_data);
  std::string wegnehmen();
  bool isEmpty();
private:
  Datapackage* top_item_ptr;
};
