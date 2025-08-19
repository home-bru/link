#include "ps4.h"
#include <sys/types.h>

int _main(struct thread *td) {
  UNUSED(td);

  initKernel();
  initLibc();

  pid_t pid = 103;
  int sig = SIGTERM;
  kill(pid,sig);
  
  printf_notification("Hello Link");

  return 0;
}
