#ifndef HELP_H
#define HELP_H


// enum to represent operators
enum operators {
    ADD=1,
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

// show introductory function
void intro();

// function for showing menu
void showMenu() ;

// taking inpuut
void  takeinput1(double *number1);
void  takeinput2(double *number2);

void inputangle(double *angle);

void Single_vallue(double *value);

// value conversion

void radianTodegree(double *angle);

void degreeToradian(double *angle);


// addition function declaration
double addition(double a, double b) ;
    
    // subtraction function declaration
double subtraction(double a, double b) ;

    // multiplication function  declaration
double multiplication(double a, double b);

    // division function declaration
void division(double a, double b); 

// modulo function  declaration
void modulo(int a, int b) ;

// power function   declaration
double power(double base, double exponent) ;

// square root function declaration
void square_root(double num) ;

// factorial function declaration - using unsigned long long to handle larger factorials, but keep in mind it can still overflow for n > 20
void factorial(int n) ;

// logarithm function declaration
void logarithm(double num);

// trigonometric functions declaration
void sine(double angle);

void cosine(double angle) ;

void tangent(double angle) ;

// inverse trigonometric functions declaration
void arcsine(double value) ;

void arccosine(double value) ;

void arctangent(double value) ;



// result display function
void printResult(double num1, double num2, double result, char symbol);


#endif
