#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  int *ptr = &arr[9];
  int i;
  for(i==0;i>=0;i++)
  {
    printf("%i",*ptr);
    *ptr--;
  }

  char *ptr2 = &s[0];
  int length = strlen(s);
  for(i==0;i<=length;i++)
  {
    ptr2[i]='#';
    printf("%i",*ptr2);
    *ptr2++;
  }
  // Code for Checkpoint 1 goes here.

  // Code for Checkpoint 2 goes here.

  // Code for Checkpoint 3 goes here.

  // Code for Checkpoint 4 goes here.
  
  printf("%s\n", s);  
}