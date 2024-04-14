#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main()
{
  printf("My PID id : %d",getpid());
  exit(0);
}
