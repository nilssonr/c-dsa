#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
  dsa_linked_list_t* list = dsa_linked_list_init();
  dsa_linked_list_insert_end(list, 1);
  dsa_linked_list_insert_end(list, 2);
  dsa_linked_list_insert_end(list, 3);
  dsa_linked_list_insert_end(list, 4);
  dsa_linked_list_insert_start(list, 5);
  dsa_linked_list_delete_first(list);
  dsa_linked_list_insert_start(list, 6);
  dsa_linked_list_delete_last(list);

  printf("Length: %d\n", dsa_linked_list_length(list));
  int* result = dsa_linked_list_dump(list);
  for (int i = 0; i < dsa_linked_list_length(list); i++) {
    printf("Value: %d\n", result[i]);
  }
  free(result);
  free(list);

  return 0;
}