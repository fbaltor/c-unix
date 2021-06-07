#include <stdio.h>

void swap1(int a, int b) {
  int t = a;
  a = b;
  b = t;
}

void swap2(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
}

int main() {
  int a, b;

  printf("Enter 'a': ");
  scanf("%d", &a);
  printf("Enter 'b': ");
  scanf("%d", &b);

  printf("\nBefore the swap1 function 'a' are %d and 'b' are %d\n", a, b);
  swap1(a, b);
  printf("After the swap1 function 'a' are %d and 'b' are %d\n\n", a, b);

  printf("Before the swap2 function 'a' are %d and 'b' are %d\n", a, b);
  swap2(&a, &b);
  printf("After the swap2 function 'a' are %d and 'b' are %d\n", a, b);
}
