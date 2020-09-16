#include "io_controller/io_controller.h"

int main(int argc, char **argv)
{
  IOController io_controller;
  io_controller.setPort(0, true);
  io_controller.setPort(0, false);
  io_controller.setPort(1, true);
  io_controller.setPort(1, false);
  io_controller.setPort(2, true);
  io_controller.setPort(2, false);
  io_controller.setPort(3, true);
  io_controller.setPort(3, false);
  return 0;
}
