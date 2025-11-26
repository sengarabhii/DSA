#include<stdio.h>
int main(){
    printf("A B sum carry\n");
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            int sum = i^j;
            int carry = i&&j;
            printf("%d %d  %d    %d\n",i,j,sum,carry);
        }
    }
}