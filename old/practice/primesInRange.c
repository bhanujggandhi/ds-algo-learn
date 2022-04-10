#include <stdio.h>

int isPrime(int n) {
  int i;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int upper, lower, i, count=0;
  printf("Enter the lower bound\n");
  scanf("%d", &lower);
  printf("Enter the upper bound\n");
  scanf("%d", &upper);

  for (i = lower + 1; i < upper; i++) {
    if (isPrime(i)) {
      printf("%d ", i);
      count++;
    }
  }
  printf("\n");
  printf("Total %d primes are there in this range\n", count);
}