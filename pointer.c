#include <stdio.h>

int main() {
  int a;
  int *pa;

  printf("Enter a number to be save in variable 'a': \n");
  scanf("%d", &a);

  pa = &a;
  printf("The address of the previous variable is: %p\n", pa);

  int i;
  for (i = 0; i < 10; i++) {
    printf("The address of the ten subsequences memory addresses are: %p",
           pa + i);

    printf("                %p\n", &a + i);
  }
}
