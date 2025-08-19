#include "ps4.h"

int _main(struct thread *td) {
  UNUSED(td);

  initKernel();
  initLibc();

  printf_notification("Hello Link");

  return 0;
}
