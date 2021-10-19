#include <stdio.h>
#include <signal.h>
#include <iostream>
#include <thread>
#include <unistd.h>

void my_thread_function1(int time);
void my_thread_function2(int time);

int main(){
  printf("hier gehts los");
  std::thread mythread1(my_thread_function1, 2);
  std::thread mythread2(my_thread_function2, 5);

  mythread1.join();
  mythread2.join();
  printf("programm fertig\n");
}

void my_thread_function1(int time)
{
  int condition = 10;
  while(condition)
  {
    printf("foo\n");
    sleep(time); // zeitding
    condition = condition - 1;
  }
  printf("thread1 is fertig\n");
}

void my_thread_function2(int time)
{
  int condition = 3;
  while(condition)
  {
    printf("bar\n");
    sleep(time); // zeitding
    condition = condition - 1;
  }
  printf("thread2 is fertig\n");
}
