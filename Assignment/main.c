/*
	Main.c to test math.h/c   
    Created on: 9/25/2017
    Last edited: 9/25/2017 4:15pm
    Programmer: Matt Delengowski
*/
#include <stdio.h>
#include <math.h>
int main()
{
	
    int Sum,Difference,Product,Quotient,Integer_Remainder,User_Choice;//defining test variables
    char Operation;
    
    Sum = math(1,5,'+');//test operations for each possible operator
    Difference = math(2,4,'-');
    Product = math(3,3,'*');
    Quotient = math(4,2,'/');
    Integer_Remainder = math(5,1,'%');
    //following line prints result0 through result4 after their assigned the math function
    printf("addition test: 1+5 = %d\nsubtraction test: 2-4 = %d\nmultiplication test: 3*3 = %d\ndivision test: 4/2 = %d\nmodulus test: 5%1 = %d\n",Sum,Difference,Product,Quotient,Integer_Remainder);
   
    printf("\nUser Input Test:\nEnter first number:");//Let user test operations
    int Input_Operand1,Input_Operand2;
    scanf("%d",&Input_Operand1);//input for first operand
    printf("\nEnter second number:");
    scanf("%d",&Input_Operand2);//input for second operand
    printf("\nEnter operator:");
    scanf(" %c",&Operation);//input for operator
    User_Choice = math(Input_Operand1,Input_Operand2,Operation);//math function is performed and assigned to User_Choice
    printf("\nUser Input Result: ");//User_Choice is displayed with operation/operands
    printf("%d %c %d = %d",Input_Operand1,Operation,Input_Operand2,User_Choice);//operator and operands
    return 0;
}

