#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fibonacci(int num, int *count);
bool fib_base_cases(int n);

int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);

  printf("%s\n", fib_base_cases(num) ? "true" : "false");

  return 0;
}

bool fib_base_cases(int n) {
  int result = 0;
  int fib = fibonacci(n, &result);
  return result == fib;
}

int fibonacci(int num, int *count) {
  if (num == 1 || num == 2) {
    (*count)++;
    return 1;
  }

  return fibonacci(num - 1, count) + fibonacci(num - 2, count);
}