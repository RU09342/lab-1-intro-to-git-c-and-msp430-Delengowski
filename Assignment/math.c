/*
    math.c
    Basic calculator function that performs +,-,*,/, and %.
    Author: Matt Delengowski
    Created: 9/25/2017
    Last Edited: 9/25/2017 8:35pm
    
    note: divide by zero not handled in this code
*/
#include <math.h>
int math(int Operand1, int Operand2, char Operator){  //Valid inputs are two integers as operands and characters: +,-,*,/, or % as operators
    int result; //Result of Operation

    switch(Operator)  //Selects operation based on users chosen operator.
    {           
        case '+':
            result = Operand1+Operand2;//addition
            break;
        case '-':
            result = Operand1-Operand2;//subtraction
            break;
        case '*':
            result = Operand1*Operand2;//multiplication
            break;
        case '/':
            result = Operand1/Operand2;//division
            break;
        case '%':
            result = Operand1%Operand2;//modulus
            break;
        default:
        printf("invalid operator for: ");// If a possible operator is not chosen.
        break;
    }
    return result;
}