
#include "help.h"
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define PI 3.14159

//intro function

void intro(){
    printf("\n=================================================\n");
    printf("Welcome to the Arithmetic Calculator!\n");
    printf("You can perform operations many operations\n");
    printf("===================================================\n\n");
}

 //for menu
 void showMenu() {
    printf("\n--- Arithmetic Calculator  Menu---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulo division(%%)\n");
    printf("6. Power (^)\n");
    printf("7. Square Root (sqrt)\n");
    printf("8. Sine (sin)\n");
    printf("9. Cosine (cos)\n");
    printf("10. Tangent (tan)\n");
    printf("11. Arcsin (arcsin)\n");
    printf("12. Arccos (arccos)\n");
    printf("13. Arctan (arctan)\n");
    printf("14. Logarithm (log10)\n");
    printf("15. Factorial (!)\n");
    printf("Enter your choice (1-15): ");
}


// value conversion

void radianTodegree(double *angle){
    *angle = *angle * (180 / PI);
}

void degreeToradian(double *angle){
    *angle = *angle * (PI/180);
}

// for input1
void  takeinput1(double *number1){

    // first number
    while(true){
        printf("Enter first number: ");
        if((scanf("%lf", number1)) != 1){
            printf("Invalid number!\n");
        }else{
            break; // break loop and move ahead;
        }
    }
}

// taking input2
void takeinput2(double *number2){

    //sescond number
    while(true){
        printf("Enter second number: ");
        if((scanf("%lf", number2)) != 1){
            printf("Invalid number!\n");
        }else{
            break; // break loop and move ahead;
        }
    }
}


// taking angle
void inputangle(double *angle){

    //angle
    while(true){
        printf("Enter angle in degree: ");
        if((scanf("%lf", angle)) != 1){
            printf("Invalid input!\n");
        }else{
            break; // break loop and move ahead;
        }
    }
    // converting value in radian
    degreeToradian(angle);
}


// for single value

void Single_value(double *value){
    //single number
    while(true){
        printf("Enter  value: ");
        if((scanf("%lf", value)) != 1){
            printf("Invalid value!\n");
        }else{
            break; // break loop and move ahead;
        }
    }
}


 // addition function
       double addition(double a, double b) {
                return a + b;   
        }
         
            // subtraction function
        double subtraction(double a, double b) {
                return a - b;
        }
        
            // multiplication function
        double multiplication(double a, double b) {
                return a * b;
        }
            // division function
        void division(double a, double b) {
                if (b != 0) {
                    printf("%.2lf / %.2lf= %.2lf\n", a, b, a / b);
                } else {
                    printf("\nError! Division by zero.\n");
                    return; // 
                }
        }  
        
        // modulo function
        void modulo(int a, int b) {
            if (b != 0) {
                printf(" %d %% %d = %d\n", a, b, (a % b)); 
            } else {
                printf("\nError! Division by zero.\n");
            }
        }

        // power function   
        double power(double base, double exponent) {
                return pow(base, exponent);
        }

        // square root function
        void square_root(double num) {
                if (num >= 0) {
                    // it take only one value
                    printf(" Square root of %0.2lf = %.2lf\n",  num, sqrt(num));
                } else {
                    printf("Error! Cannot compute square root of a negative number.\n");
                    // return 0; // Return 0 or handle as needed
                }
        }

        // factorial function - using unsigned long long to handle larger factorials, but keep in mind it can still overflow for n > 20
        void factorial(int n) {
                if (n < 0) {
                    printf("Error! Factorial is not defined for negative numbers.");
                    // return 0; // Return 1 or handle as needed
                } else if (n == 0 || n == 1) {

                    printf(" Factorial of %d = %d\n", n, 1); // Print as integer since factorial is an integer
                    return ;
                } else {
                    unsigned long long result = 1;
                    int t = n;
                    while(t>0){
                        result *= t;
                        t--;
                    }
                    printf(" Factorial of %d = %llu\n", n, result); // Print as integer since factorial is an integer
                    // fact_result = 0; // Reset factorial result for next calculation
                    result = 1;
                }
        }

        // logarithm function
        void logarithm(double num) {
                if (num > 0) {
                    printf(" Logarithm(10) of %0.2lf = %.2lf\n", num , log10(num));
                   
                    return ; // this will calculate the logarithm of number to the base 10
                } else {
                    printf("Error! Logarithm is not defined for non-positive numbers.");
                    return; // Return 0 or handle as needed
                }
        }


        // trigonometric functions
        void sine(double angle) {
            double result = sin(angle);
            radianTodegree(&angle);
            printf(" Sine of %0.2lf = %.2lf\n", angle, result);
            return;
        }   
        
        void cosine(double angle) {
            double result = cos(angle);
            radianTodegree(&angle);
            printf(" cos of %0.2lf = %.2lf\n", angle, result);
            return;
        }
        
        void tangent(double angle) {
            double result = tan(angle);
            radianTodegree(&angle);
            printf(" tan of %0.2lf = %.2lf\n", angle, result);
            return;
        }

        // inverse trigonometric functions
        void arcsine(double value) {
                if (value >= -1 && value <= 1) {
                    printf(" Arcsine of %0.2lf = %.2lf\n", value, asin(value));
                    return ;
                } else {
                    printf("Error! Arcsine is not defined for values outside the range [-1, 1].");
                    // return 0; // Return 0 or handle as needed
                }
        }
        void arccosine(double value) {
                if (value >= -1 && value <= 1) {
                    printf(" Arc cosine of %0.2lf = %.2lf\n", value, acos(value));
                    return ;
                } else {
                    printf("Error! Arccosine is not defined for values outside the range [-1, 1].");
                    // return 0; // Return 0 or handle as needed
                }
        }
        
        void arctangent(double value) {

            printf(" Arc tangent of %0.2lf = %.2lf\n",   value, atan(value));
                return ;
        }


        // result display function
         void printResult(double num1, double num2, double result, char operator){
            if(result == (long long)result){
                printf(" %.2lf %c %.2lf = %lld\n", num1, operator, num2, (long long)result);
            }else{
                printf(" %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            }
         }
