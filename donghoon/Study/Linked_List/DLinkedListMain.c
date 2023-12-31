#include <stdio.h>
#include "DLinkedList.h"
#include "DLinkedList.c"

int main(void)
{
  List list;
  int data;
  ListInit(&list);

  LInsert(&list, 11);
  LInsert(&list, 22);
  LInsert(&list, 33);
  LInsert(&list, 44);

  printf("Current number of data : %d \n", LCount(&list));

  if (LFirst(&list, &data))
  {
    printf("%d ", data);
    while (LNext(&list, &data))
      printf("%d ", data);
  }
  printf("\n\n");

  if (LFirst(&list, &data))
  {
    if (data == 22)
      LRemove(&list);
    while (LNext(&list, &data))
    {
      if (data == 22)
        LRemove(&list);
    }
  }

  printf("Current number of data : %d \n", LCount(&list));

  if (LFirst(&list, &data))
  {
    printf("%d ", data);
    while (LNext(&list, &data))
      printf("%d ", data);
  }
  printf("\n\n");
  return 0;
}