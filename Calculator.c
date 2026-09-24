#include <stdio.h>

int main(){
    int num1, num2, choice;
    printf("----- Welcome to the Calculator -----\n");
    while(1)
    {
        printf("\n----- Calculator Menu -----\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exit\n");
        printf("Enter your choice: ");
        
        if(scanf("%d", &choice) != 1){
            printf("Invalid input! Please enter a number.\n");
            while(getchar() != '\n'); // buffer clear
            continue;
        }

        if(choice == 6){
            printf("Exiting... Bye!\n");
            break;
        }

        if(choice >=1 && choice <=5){
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
        }

        switch(choice){
            case 1: printf("Result:%d\n", num1+num2); break;
            case 2: printf("Result:%d\n", num1-num2); break;
            case 3: printf("Result:%d\n", num1*num2); break;
            case 4: 
                if(num2 != 0) printf("Result:%.2f\n", (float)num1/num2);
                else printf("Cannot divide by zero!\n");
                break;
            case 5: printf("Result:%d\n", num1%num2); break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}