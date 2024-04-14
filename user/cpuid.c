#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main()
{
  int x = getcpuid();
  printf("CPU ID:%d\n",x);
  exit(1);
}
