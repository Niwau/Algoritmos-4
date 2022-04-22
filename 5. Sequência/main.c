#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1; i <= 50; i++){
        if(i%2 == 0){
            printf("%d, ", -i);
        } else{
            printf("%d, ", i);
        }
    }

    printf("\n");
}
