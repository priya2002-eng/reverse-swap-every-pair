#include <stdio.h>
int main(){
  int n, a[n];

  printf("Enter an array size in Even digit: ");
  scanf("%d", &n);

  printf("Enter array elements: ");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for(int i = n-1; i >= 0; i--){
    if(i % 2 != 0){
      int j = i;
      printf("%d", a[--j]);
    }

    else{
      int k = i;
      printf("%d", a[++k]);
    }
  }

  return 0;
}
