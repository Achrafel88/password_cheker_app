/* ==== Password Checker App ==== 
# What we need: 
- variable to store password 
- take input from user 
- check if (user_input == password) 
- if True : print( password is true ) 
- else : print( password is not true ) and Try Again 
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char pass[]="12345";
    char user_input[10];
do
{
    printf("enter your password :");
    scanf("%s", &user_input);
    // strcmp => returne 0 if true , 1 if false 
    if (!strcmp(user_input, pass))
    {
       printf("success :)");
       break;
    }
    else {
        printf("worning ! \n");
    }
} while (1);

   
    
}