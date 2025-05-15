#include <stdio.h>
void main() {
  int i,j,temp,n,a[100],x=0,y=0;
  printf("Enter size of Array:");
  scanf("%d",&n);
  printf("Enter elements:\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Unsorted Array:\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  for (i=0; i<n-1; i++) {
    x=a[i];
    y=i;
    for (j=i+1; j<n; j++) {
      if (x > a[j]) {
          x=a[j];
          y=j;
      }
    }
     temp = a[i];
     a[i] = x;
     a[y] = temp;
  }
  printf("\nSorted Array:\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}

