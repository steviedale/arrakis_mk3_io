#if defined (__cplusplus)
extern "C" {
#endif

#include "arrakis_mk3_io/f75111.h"

#if defined (__cplusplus)
}
#endif

#include <iostream>

int main(int argc, char **argv)
{
  bool init_success = F75111_Init();
  std::cout << init_success << std::endl;
  return 0;
}
