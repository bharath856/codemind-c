#include <stdio.h>
 
int main() {
   int nbr, i, j, k;
   int arr[30];
   scanf("%d", &nbr);
   for (i = 0; i < nbr; i++)
      scanf("%d", &arr[i]);
 
   // Remove duplicates
   for (i = 0; i < nbr; i++) {
      for (j = i + 1; j < nbr;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < nbr; k++) {
               arr[k] = arr[k + 1];
            }
            nbr--;
         } else
            j++;
      }
   }
   for (i = 0; i < nbr; i++) {
      printf("%d ", arr[i]);
   }
 
   return 0;
}