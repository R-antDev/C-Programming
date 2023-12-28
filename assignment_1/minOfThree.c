//
// minimum of three
//

#include <stdio.h>

int main(void){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 < n2){
        if(n1 < n3) {
            printf("Minimum is Number 1: %d\n", n1);
        } else{
            printf("Minimum is Number 3: %d\n", n3);
        }
    }else{
        if(n2 < n3){
            printf("Minimum is Number 2: %d\n", n2);
        } else{
            printf("Minimum is Number 3: %d\n", n3);
        }
    }
}
