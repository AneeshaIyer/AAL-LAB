#include <stdio.h>
void main() {
  int i,j,temp,n,a[100];
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
    for (j=0; j<n-i-1; j++) {
      if (a[j] > a[j+1]) {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  printf("\nSorted Array:\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}


/*OUTPUT
Enter size of Array:4
Enter elements:
3
9
2
6
Unsorted Array:
3 9 2 6 
Sorted Array:
2 3 6 9 */
