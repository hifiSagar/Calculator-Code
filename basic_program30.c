#include<stdio.h>
int main(){
    int a,b,res,add;
    printf("Enter a two numbers ");
    scanf("%d%d",&a,&b);
    printf("ENTER A OPTION\n1.ADD\n2.SUBTRAcT\n3.MULTIPLICATION\n4.DIVIDE\n(only use the numbers)\n");
    scanf("%d",&add);
    switch (add)
    {
    case 1: res=a+b;
    break;
    case 2: res=a-b;
    break;
    case 3: res= a*b;
    break;
    case 4: res= a/b;
    break;
    
    default: printf("Invalid Choice\n");
        break;
    }
    printf("Result is : %d",res);

    return 0;
}