#include <stdio.h>

int sub_func(char* msg)
{
  printf("[[%s]]\n", msg);

  return (0);
}

int sub_func2(int val)
{
  printf("[%d]\n", val);

  return (0);
}

int main(int argc, char** argv)
{
  printf("Hello, world!\n");

  sub_func("OK!");

  sub_func2(1999);

  return (0);
}
