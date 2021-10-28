#include <stdbool.h>

typedef struct Datapackage {
  char data[16];           // 10byte
  struct Datapackage* next;       // 8byte
} Datapackage;

Datapackage* newDatapackage(char* new_data);

/* Lifo_c */
typedef struct Lifo_c {
  Datapackage* top_item_ptr;
} Lifo_c;

Lifo_c* newLifo_c();
void delLifo_c(Lifo_c* obj);

void draufpacken(Lifo_c* obj, char* new_data);
char* wegnehmen(Lifo_c* obj);
bool isEmpty(Lifo_c* obj);
