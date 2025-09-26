
#include <stdio.h>

int main() {
    
    int mult;
    
   printf("Enter a number to print its multiplication table:\n");
    scanf("%d", &mult);
    
    printf("\n");
    
    for (int i = 0; i < 11; i++) {
        int ans = mult * i; //optional  integer, you can do mult * i when printing the table.
        printf("%d X %d = %d\n", mult, i, ans); 
    }


    return 0;
}
