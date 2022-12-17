#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  scanf("%d", &n);

  // print the first two terms t1 and t2
  

  // print 3rd to nth terms
  while(nextTerm<n) {
    
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  if(nextTerm==n)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }

  return 0;
}














