#if defined (__cplusplus)
extern "C" {
#endif

#include "arrakis_mk3_io/f75111.h"
#include <sys/io.h>

#if defined (__cplusplus)
}
#endif

#include <iostream>

int main(int argc, char **argv)
{
  bool success = F75111_Init();
  //int success = iopl(3);
  std::cout << success << std::endl;
  return 0;
}
