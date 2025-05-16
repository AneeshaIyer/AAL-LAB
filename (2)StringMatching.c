#include <stdio.h>
void main() {
  int i,j,k,x,b[10],n,a[100],c;
  printf("Enter size of Array:");
  scanf("%d",&n);
  printf("Enter elements:\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Array:\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\nEnter size of Pattern:");
  scanf("%d",&k);
  printf("Enter elements:\n");
  for(i=0;i<k;i++){
    scanf("%d",&b[i]);
  }
  for (i=0; i<n-k; i++) {
    x=0;
    for (j=0; j<k; j++) {
      if (a[j+i]==b[j]) {
          x+=1;
      }
      else{
        break;
      }
    }
    if (x==k) {
        printf("Pattern found at index %d\n", i);
        c=1;
    }
  }    
  if(c!=1){
        printf("Pattern not found!");
  }
}


/*OUTPUT
Enter size of Array:5
Enter elements:
4
8
1
9
3
Array:
4 8 1 9 3 
Enter size of Pattern:2
Enter elements:
1
9
Pattern found at index 2 */
