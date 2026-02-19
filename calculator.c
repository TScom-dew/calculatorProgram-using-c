#include<stdio.h>// for input output
#include<stdbool.h>// for boolean
#include<stdlib.h>//for memory allocation, and  also for exit() function
#include<math.h> // for mathematical functions
#include<string.h> // for string handling functions
#include<ctype.h> // for character handling functions

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
        double division(double a, double b) {
                if (b != 0) {
                    return a / b;
                } else {
                    printf("Error! Division by zero.");
                    return 0; // Return 0 or handle as needed
                }
        }  
        
        // modulo function
        int modulo(int a, int b) {
                if (b != 0) {
                    return a % b;
                } else {
                    printf("Error! Division by zero.");
                    return 0; // Return 0 or handle as needed
                }
        }

        // power function   
        double power(double base, double exponent) {
                return pow(base, exponent);
        }

        // square root function
        double square_root(double num) {
                if (num >= 0) {
                    return sqrt(num);
                } else {
                    printf("Error! Cannot compute square root of a negative number.");
                    return 0; // Return 0 or handle as needed
                }
        }

        // factorial function - using unsigned long long to handle larger factorials, but keep in mind it can still overflow for n > 20
        unsigned long long factorial(int n) {
                if (n < 0) {
                    printf("Error! Factorial is not defined for negative numbers.");
                    return 0; // Return 0 or handle as needed
                } else if (n == 0 || n == 1) {
                    return 1;
                } else {
                    unsigned long long result = 1;
                    for (int i = 2; i <= n; i++) {
                        result *= i;
                    }
                    return result;
                }
        }

        // logarithm function
        double logarithm(double num) {
                if (num > 0) {
                   
                    return log10(num); // this will calculate the logarithm of number to the base 10
                } else {
                    printf("Error! Logarithm is not defined for non-positive numbers.");
                    return 0; // Return 0 or handle as needed
                }
        }


        // trigonometric functions
        double sine(double angle) {
                return sin(angle);
        }   
        double cosine(double angle) {
                return cos(angle);
        }
        double tangent(double angle) {
                return tan(angle);
        }

        // inverse trigonometric functions
        double arcsine(double value) {
                if (value >= -1 && value <= 1) {
                    return asin(value);
                } else {
                    printf("Error! Arcsine is not defined for values outside the range [-1, 1].");
                    return 0; // Return 0 or handle as needed
                }
        }
        double arccosine(double value) {
                if (value >= -1 && value <= 1) {
                    return acos(value);
                } else {
                    printf("Error! Arccosine is not defined for values outside the range [-1, 1].");
                    return 0; // Return 0 or handle as needed
                }
        }
        double arctangent(double value) {
                return atan(value);
        }


        // result display function
         void printResult(char num1_str[], char num2_str[], double result, char operator){
            if(result == (long long)result){
                printf(" %s %c %s = %lld\n", num1_str, operator, num2_str, (long long)result);
            }else{
                printf(" %s %c %s = %.2lf\n", num1_str, operator, num2_str, result);
            }
         }


        // enum to represent operators
        enum operators {
            ADD,
            SUB,
            MUL,
            DIV,
            MOD,
            POW,
            SQRT,
            SIN,
            COS,
            TAN,
            ARCSIN,
            ARCCOS,
            ARCTAN,
            LOG,
            FACT
        };

            // struct to map operator string to enum value

         typedef struct operator_map {
            char operator_str[10]; // this will hold the operator as string

            enum operators operator; // this will hold the enum value of the operator
            
        } operator_map_t;



int main(){


    char op_ch; // Variable to hold operator character input

    // for string type oprator input
    enum operators operator=0; // Variable to hold operator enum value 
    


    // using enum to represent operators
    operator_map_t operator_map[] = {
        {"+", ADD},
        {"-", SUB},
        {"*", MUL},
        {"/", DIV},
        {"%", MOD},
        {"^", POW},
        {"sqrt", SQRT},
        {"sin", SIN},
        {"cos", COS},
        {"tan", TAN},
        {"arcsin", ARCSIN},
        {"arccos", ARCCOS},
        {"arctan", ARCTAN},
        {"log", LOG},
        {"fact", FACT}
    };
   
    char operator_str[10]; // Buffer to hold user operator as string
    double num1=0.0;
    double  num2=0.0;
    double result=0.0;
    bool  isExit=false;
    char buffer[100]; // Buffer to hold user operator
    char num1_str[50]; // Buffer to hold user input for num1
    char num2_str[50]; // Buffer to hold user input for num2
    unsigned long long fact_result=0; // Variable to hold factorial result


    // welcome message

    printf("\n===================================================\n");
    printf("Welcome to the Arithmetic Calculator!\n");
    printf("You can perform operations like addition (+), subtraction (-), multiplication (*), division (/), modulo (%%), power (^), square root (sqrt), sine (sin), cosine (cos), tangent (tan), arcsine (arcsin), arccosine (arccos), and arctangent (arctan), logarithm (log), factorial (fact), Quit (q).\n");
    printf("===================================================\n\n");

    while (!isExit)
    {
        while (true) {
            printf("Enter an operator (+, -, *, /, %%, ^, sqrt, sin, cos, tan, arcsin, arccos, arctan, log, fact): ");
            fgets(buffer, sizeof(buffer), stdin);
            if (sscanf(buffer, " %c", &op_ch) == 1 && (op_ch == '+' || op_ch == '-' || op_ch == '*' || op_ch == '/'|| op_ch == '%' || op_ch == '^')) {

                while (true)
                    {
                        printf("Enter first number: ");
                        fgets(num1_str, sizeof(num1_str), stdin);
                        //strcspn ka second argument string hota hai, character nahi. so does not use'\n' as character, use "\n" as string
                        num1_str[strcspn(num1_str, "\n")]='\0'; // Remove newline character from num1 string
                        printf("Enter second number: ");
                        fgets(num2_str, sizeof(num2_str), stdin);
                        num2_str[strcspn(num2_str, "\n")]='\0'; // Remove newline character from num2 string
                        if (sscanf(num1_str, "%lf", &num1) == 1 && sscanf(num2_str, "%lf", &num2) == 1) {
                            break; // Valid numbers entered
                        } else {
                            printf("Invalid input. Please enter valid numbers.\n");
                        }
                    }

                  
                   char op_str[2]; // Buffer to hold operator as string (1 character + null terminator)
                   sprintf(op_str, "%c", op_ch); // Convert operator character to string
                     for (int i = 0; i < sizeof(operator_map) / sizeof(operator_map[0]); i++) 
                     {
                            if (strcmp(operator_map[i].operator_str, op_str) == 0) {
                             operator = operator_map[i].operator; // Map operator character to enum value
                             break;
                            }
                      }
               
            

                break; // Valid operator entered
            } else if(sscanf(buffer, "%s", operator_str)==1 &&(strcmp(operator_str, "sqrt")==0 || strcmp(operator_str, "sin")==0 || strcmp(operator_str, "cos")==0 || strcmp(operator_str, "tan")==0 || strcmp(operator_str, "arcsin")==0 || strcmp(operator_str, "arccos")==0 || strcmp(operator_str, "arctan")==0 || strcmp(operator_str, "log")==0 || strcmp(operator_str, "fact")==0))
            {
                while (true)
                    {
                        printf("Enter the value: ");
                        fgets(num1_str, sizeof(num1_str), stdin);
                        num1_str[strcspn(num1_str, "\n")]='\0'; // Remove newline character from num1 string
                        if (sscanf(num1_str, "%lf", &num1) == 1) {
                            break; // Valid number entered
                        } else {
                            printf("Invalid input. Please enter a valid number.\n");
                        }
                    }

                        // here we comparing the user input operator string with operator_str in operator_map to find the corresponding enum value of the operator, which we will use in switch case to perform the calculation and display the result.
                for (int i = 0; i < sizeof(operator_map) / sizeof(operator_map[0]); i++)
                {
                    if (strcmp(operator_map[i].operator_str, operator_str) == 0) {
                        operator = operator_map[i].operator; // Map operator string to enum value
                        break;
                    }
                }

                break; // Valid operator entered
            }  if (buffer[0] == 'q' || buffer[0] == 'Q') {
                isExit = true;
                break; // Exit the loop if user wants to quit

            } else {
                printf("Invalid operator. Please try again.\n");
            }
        }
        
        


        switch(operator)
        {
            case ADD:
                result = addition(num1, num2);
                printResult(num1_str, num2_str, result, '+');
                break;

            case SUB:
                result = subtraction(num1, num2);
                printResult(num1_str, num2_str, result, '-');
                break;

            case MUL:
                result = multiplication(num1, num2);
                printResult(num1_str, num2_str, result, '*');
                break;

            case DIV:
                result = division(num1, num2);
                printResult(num1_str, num2_str, result, '/');
                break;

            case MOD:
                result = modulo((int)num1, (int)num2);
                // printResult(num1_str, num2_str, result, operator); yhan num1_str aur num2_str ko integer me convert karna hoga
                printf(" %s %c %s = %d\n", num1_str, '%', num2_str, (int)result);
                break;
            case POW:
                    result = power(num1, num2);
                    printResult(num1_str, num2_str, result, '^');
                    break;

            case SQRT:
                result = square_root(num1);
                printf(" Square root of %s = %.2lf\n",  num1_str, result);
                break;
            case SIN:
                result = sine(num1);
                printf(" Sine of %s = %.2lf\n",  num1_str, result);
                break;
            case COS:
                result = cosine(num1);
                printf(" Cosine of %s = %.2lf\n",  num1_str, result);
                break;
            case TAN:
                result = tangent(num1);
                printf(" Tangent of %s = %.2lf\n",  num1_str, result);
                break;
            case ARCSIN:
                result = arcsine(num1);
                printf(" Arcsine of %s = %.2lf\n", num1_str, result);
                break;
            case ARCCOS:
                result = arccosine(num1);
                printf(" Arc cosine of %s = %.2lf\n", num1_str, result);
                break;
            case ARCTAN:
                result = arctangent(num1);
                printf(" Arc tangent of %s = %.2lf\n",   num1_str, result);
                break;
            case LOG:
                result = logarithm(num1);
                printf(" Logarithm(10) of %s = %.2lf\n", num1_str, result);
                break;
            case FACT:
                fact_result = factorial((int)num1); // Convert to integer for factorial calculation
                printf(" Factorial of %s = %llu\n", num1_str, fact_result); // Print as integer since factorial is an integer
                fact_result = 0; // Reset factorial result for next calculation
                break;
            default:
                printf("Error! Operator is not correct");
        }

        result = 0.0; // Reset result for next calculation


       while (true)
       {
        printf("Do you want to perform another calculation? (yes/no): ");
        fgets(buffer, sizeof(buffer), stdin);
        // Remove newline character from buffer
        buffer[strcspn(buffer, "\n")] = '\0';
        if ( tolower(buffer[0]) == 'n' ) {

            printf("Thank you for using the Arithmetic Calculator. Goodbye!\n");
            isExit = true;
            break; // Exit the loop if user does not want to continue

        }else if (tolower(buffer[0]) == 'y') {
            break; // Continue to the next calculation
        } else {
            printf("Invalid input. Please enter 'yes' or 'no'.\n");
        }
       }
       
    }
    
   

    return 0;
}


/*End*/


