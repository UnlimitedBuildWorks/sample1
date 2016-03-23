#include <stdio.h>

int sub_func(char* msg)
{
  printf("[%s]\n", msg);

  return (0);
}

int main(int argc, char** argv)
{
  printf("Hello, world!\n");

  sub_func("OK!");

  return (0);
}
