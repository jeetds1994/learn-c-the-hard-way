#include <stdio.h>


// this example shows multiple ways of using pointers
int main(int argc, char *argsv[]) {

  int ages[] = {1, 3, 4};
  char *names[] = {"Hulk", "Iron man", "Thor"};

  // safely get the size of ages
  int count = sizeof(ages) / sizeof(int);

  int i = 0;
  for (i = 0; i < count; i++) {
    printf("%s is %d years old.\n", names[i], ages[i]);
  }



  int *cur_age = ages;
  char **cur_name = names;


  for (i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));

  }

  for (i = 0; i < count; i++) {
    printf("%s is %d years old.\n", cur_name[i], cur_age[i]);

  }

  return 0;
}
