#include <cstdio>
int main(){
    int x,y,choice;
    printf("Enter two numbers : ");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Enter your choice \n - 1. add 2 subtract 3. multiply 4. divide \n");
    scanf("%d", &choice);
    switch(choice){
    case 1:
    printf("sum = %d",x+y);
    break;
    case 2:
    printf("subtract = %d",x-y);
    break;
    case 3:
    printf("multiply = %d",x*y);
    break;
    case 4:
    printf("divide = %d",x/y);
    break;
    }
    return 0;
}