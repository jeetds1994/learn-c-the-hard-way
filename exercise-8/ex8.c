#include <stdio.h>

int main(int argc, char *argsv[]) {
  int areas = (10, 12, 13, 14, 20);
  char name[] = "Zed";
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };

  printf("the size of an int is %ld:\n", sizeof(full_name));

  printf("the size of an int is %c:\n", name[0]);
  printf("the size of an int is %c:\n", name[1]);
  printf("the size of an int is %c:\n", name[2]);
  printf("the size of an int is %c:\n", name[3]);
}
