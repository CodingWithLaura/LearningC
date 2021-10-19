#include <stdio.h>
#include <signal.h>

int condition = 1;

// callback function  üfr die handler
void  handle_sigint(int sig)
{
  printf("huhu\n");
  condition = 0;
}


int main(){
  // registriert für Event SIGINT den Callback handle_sigint
  signal(SIGINT, handle_sigint);
  while(condition)
  {
    printf("hello world\n");
    sleep(1); // zeitding
  }
  printf("ende\n");
  return 0;
}
