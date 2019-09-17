#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create (char *name, int age, int height, int weight) {

  struct Person *who = malloc(sizeof(struct Person));

  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;

}

void Person_destory(struct Person *who) {
  assert(who != NULL);
  free(who->name);
  free(who);
}

void Person_print(struct Person *who) {
  printf("Person name is %s\n", who->name);
  printf("Person age is %d\n", who->age);
  printf("Person height is %d\n", who->height);
  printf("Person weight is %d\n", who->weight);
}

int main (int argc, char *argv[]) {

  struct Person *person_1 = Person_create("Thor", 1000, 6, 300);

  Person_print(person_1);

  Person_destory(person_1);

  Person_print(person_1);

  return 0;
}
