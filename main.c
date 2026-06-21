#include<stdio.h>// for input output
#include<stdbool.h>// for boolean
#include<stdlib.h>//for memory allocation, and  also for exit() function
#include<math.h> // for mathematical functions
#include<string.h> // for string handling functions
#include "help.h"  // all calculator funtion

 double number1 ;
 double number2 ;
 double singleNumber;
 double angle;
 int choice ;


double value1 = 0;
double value2 = 0;
double result = 0;
bool isExit = false;
bool isOneValue = false;
unsigned long long fact_result = 1;

int main(){

    // intro funtion
    intro();

    while(!isExit){
            // taking choice

        while (true){
            // all options 
            showMenu();

            if((scanf("%d", &choice))!= 1){
                printf("\nInvalid choice, choose from menu.\n");
                choice = 0;
            }else  if(choice < 1 || choice >15){
                printf("\nInvalid choice, choose from menu.\n");
                choice = 0;
                continue;
            }else{
                break;
                // go ahead and break loop
            }    
        }

        // taking values
        if(choice<=6 && choice>=1){
            takeinput1(&value1);
            takeinput2(&value2);
        }else if(choice==8 || choice==9|| choice==10){
            inputangle(&angle);
        }else {
            Single_vallue(&singleNumber);
        }
    
    
    // start calculation
    
        switch(choice)
        {
            case ADD:
                result = addition(value1, value2);
                printResult(value1, value2, result, '+');
                break;

            case SUB:
                result = subtraction(value1, value2);
                printResult(value1, value2, result, '-');
                break;

            case MUL:
                result = multiplication(value1, value2);
                printResult(value1, value2, result, '*');
                break;

            case DIV:
                 division(value1, value2);
                break;

            case MOD:
                 modulo((int)value1, (int)value2);
                break;
            case POW:
                    result = power(value1, value2);
                    printResult(value1, value2, result, '^');
                    break;
            case SQRT:
                 square_root(singleNumber);
                break;
            case SIN:
                sine(angle);
                break;
            case COS:
                cosine(angle);
                break;
            case TAN:
                tangent(angle);
                break;
            case ARCSIN:
                 arcsine(singleNumber);
                break;
            case ARCCOS:
                arccosine(singleNumber);
                break;
            case ARCTAN:
                arctangent(singleNumber);
                break;
            case LOG:
                 logarithm(singleNumber);
                break;
            case FACT:
                factorial((int)singleNumber); // Convert to integer for factorial calculation
                break;
            default:
                printf("\nError! Operator is not correct\n");
        }

        result = 0.0; // Reset result for next calculation


       while (true)
       {
           char n = getchar();
            while(n!='\n' && n!=EOF){
                n = getchar();
            }

        // getchar();

        char buffer[5];
        printf("\nDo you want to perform another calculation? (yes/no): ");
        fgets(buffer, sizeof(buffer), stdin);
        // Remove newline character from buffer
        buffer[strcspn(buffer, "\n")] = '\0';
        if (strcmp(buffer, "no") == 0)
        {
            printf("\nThank you for using the Arithmetic Calculator!\n\n");
            isExit = true;
            break; // Exit the loop if user does not want to continue
        }else if (strcmp(buffer, "yes")==0) {
               isExit = false;
               break; // Continue to the next calculation
            } 
            else {
                printf("Invalid input. Please enter 'yes' or 'no'.\n");
            }
       }
    }

       
    return 0;
}
