//////////////////////////////////////////////////////
//
//Accept 2 numbers from user and perform the addition
//
//////////////////////////////////////////////////////

#include"Header.h"          //User defined header file inclusion
//Entry point function
int main()




{
	int iValue1=0,iValue2=0,iRet=0;       //Local Variable
	printf("Enter first number\n");
	scanf("%d",&iValue1);                //Accept the input
	printf("Enter secound number\n");
	scanf("%d",&iValue2);                //Accept the input
 
	
	iRet=Addition(iValue1,iValue2);  //Function call
	
	printf("Addition is : %d\n",iRet);
	
	return o;   //Return success to OS
}







