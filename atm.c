/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*Name: Michael Tennyson.
* Date of completion :
//Assignment 1.
//this program acts as an ATM machine, the user has four choices.
/*1.enter their default in ie. 1234
 *2. change their pin 
 *3. dispaly the number of times that the pin was entered correctly and incorrectly five times.
 *4. exit the program
 * This code have Four main if statements
 * note: each main if statement will be titled with sections. 
 */
#include <stdio.h>

int main()
{
    //initialising variables
    int originalpin = 1234;
    int newpin;//array for newpin
    int choices = 0;// variable for users choice of option
    int correctpin;// array used in section 3.
    int i;// index variable.
    int counter[5];// array used in for loop to cunt the times the user inputs the right or wrong
    char ForgetNewPIN;
    int j;//secomd index variable
    int count = 1;
    
    // Title text
    do
    {
    printf("Welcome to the  DIT ATM\n");
    printf("you have four options.\n");
    printf("1. Enter your default PIN and verify it\n");
    printf("2. Change your pin\n");
    printf("3. Check the amount of times that you enter your pin correctly or incorrectly out of five turns\n");
    printf("4. Exit pogram\n");
    printf("you must enter a number,ranging from 1-4, corresponding to their stated function.\n");
    printf("Enjoy your services\n ");
    scanf("%d",&choices);

    
    //section 1.
    if(choices == 1)
        {
             
            printf("may you enter your PIN please\n");
            scanf("%d",& originalpin);
            
            if(originalpin > 9999)
            {
                printf(" This PIN IS invalid as it  has more than four digits.\n");
                scanf("%d",&originalpin);
            }//endifA
            
           
            if(originalpin != 1234)
            {
                printf("This PIN is invalid, please enter your pin again\n");
                scanf("%d",&originalpin);   
            }//endifB
            
            //if statement C
            if(originalpin == 1234)
            {
                bummy://goto statement for incorrect verification.
                printf(" May you please enter the PIN again for veification\n");
                scanf("%d",& originalpin);
                  
          
            }//endif C
            else
            {//text for incorrect pin in verification.
                printf("This PIN is not the same as the last pin, please enter the correct pin.\n");
                goto bummy; //goto statement.
            }
            //if statement D
            if(originalpin  == 1234)
            {
                printf("thank you for entering your PIN\n");
                printf("We are very glad that you used our ATM\n");
                
               
            }//endif D
            
        count++;
        }//endif section1
        
     //Section 2.   
    if(choices == 2)
        {
            BEN: //goto statement to redirect user to enter new pin if they forgot the previous pin they inputted.
                
            
            printf("Enter your new PIN \n");
            scanf("%d",&originalpin);
            
            if(originalpin > 9999)
            {
              printf("Your new PIN cannot have more than four digits as it would be invalid.\n");
              goto BEN;// redirects user to enter PIN again.
            }
            newpin= originalpin;
            
             
                if(newpin == originalpin)
                {
                    stacey:
                    printf("Enter your new PIN again to verify it\n");
               
                    scanf("%d",&newpin);
                }
                else// if users enters a pin different to the previous pin they entered.
                {
                    printf("This PIN is not the same PIN you've entered prior\n");
                    printf("If you have forgotten your New PIN, Please enter F (CAPS), if you want to continue, enter C(CAPS).\n");
                    scanf("%1s",&ForgetNewPIN);               
                }
                //Switch statement to redirect user to enter a New PIN again
            switch(ForgetNewPIN)
            {
               case 'F':
               goto BEN;
               break;
               
            }//endswitch
            
            //second switch statement that directs the user to verity their pin again.
            switch(ForgetNewPIN)
            {
                case 'C':
                goto stacey;
                break;
            }//Endswitch
           
           
            if(newpin= newpin)
            {
                printf("You now have a new PIN.\n");
            }//
           count++;
        }//Endif2
        
        //Section 3
        if(choices == 3)
        {
            
            printf("Enter multiple PIN's to see if they are the right or wrong\n");
            
            if(correctpin > 9999)
            {
                printf(" A PIN can only have four digits\n");
                scanf("%d",&correctpin);
            }
            for(i = 0; i < 5; i++)
            {
                scanf("%d",& correctpin);
                
                    if(correctpin == 1234)
                    {
                        printf("This is the correct PIN number\n");
                    } //endif3A
               
                    if(correctpin != 1234)
                    {
                        printf("The PIN you entered is incorrect\n");
                    }//endif3B
                    if(i == 3)
                    {
                        printf("thank you for using our service\n");
                    }//endif3C 
                    
                
            }//endfor
            count++;
        } //endif 3
        
        //Section 4
        if(choices == 4 )
        {
            printf("END\n");
        }//endif4
        
        for(j = 0; j < 3; j++)
        {
            printf("Please enter one number out of the stated range '1-4'\n");
            scanf("%d",&choices);
            
            if(j == 3)
            {
                printf("Please stop entering invalid numbers\n");
                
            }
            count++;
        }//endfor
    
        
     getchar(); 
    }while(count == 1);
    
    char decision;
    if(count > 1)
    {
        printf("do you want to use another service?,enter y for yes or n for no\n");
        scanf("%c", & decision);
        
        if(decision == 'y')
        {
            count = 1;
        }
        if(decision == 'n')
        {
            printf("END\n");
        }
        
    }

     return 0;
}//End main() 








