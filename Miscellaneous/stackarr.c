#include<stdio.h>
int main(){
    int stack[5];
    int value,item,TOS=-1,choice,maxsize=5;
    while(1){
        printf("Enter 1 to PUSH\n");
        printf("Enter 2 to POP\n");
        printf("Enter 0 to EXIT\n");
        printf("Enter 3 to Display\n");
        scanf("%d",&choice);
        if(choice==0){
            break;
        }
        else if(choice==1){
            // push(stack,value,maxsize,TOS);
            if(TOS==maxsize-1){
                printf("OVERFLOW\n");
                continue;
            }
            printf("Enter value you want to push:");
            scanf("%d",&value);
            TOS++;
            stack[TOS]=value;
            printf("Value pushed successfully!\n");
        }
        else if(choice==2){
            // pop(stack,tos,&item);
            if(TOS==-1){
                printf("UNDERFLOW\n");
                continue;
            }
            item = stack[TOS];
            TOS--;
            printf("popped value is %d\n",item);
        }
        else if(choice==3){
            if(TOS==-1){
                printf("Empty stack\n");
            }
            else{
                for(int i = TOS ; i >=0 ; i--){
                    printf("%d\n",stack[i]);
                }
            }
        }
    }
}