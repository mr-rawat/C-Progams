/*An electric distribution company charges its domestic consumers as follows.
Consumption in Units		Rate of charges
- - - - -- - - -- - - - - -  - - - - - - - --  - -- - - -  -- - - - - 
0-200	Rs. 0.50 per unit
201 to 400 Rs. 100 plus		Rs. 0.65 per unit excess of 200
401 to 600 Rs. 230 plus		Rs. 0.80 per unit excess of 400
Above 600 Rs. 425 plus		Rs. 1.25 per unit excess of 600

Write a program to find out the total amount 
paid by a customer if number of unit consumed by 
the customer is entered by the user.*/

#include<stdio.h>
int main()
{
    int unit;
    float Tamt,amt,Eamt,EEamt;
    printf("Enter how many unit you have consumed?");
    scanf("%d",&unit);
    if(unit<=200)
        Tamt=unit*0.50;
        else if(unit>200 && unit<=400)
        {
            amt=200*0.50;
            Tamt=100+amt+(unit-200)*0.65;
        }
            else if(unit>400 && unit<=600)
            {
                amt=200*0.50;
                Eamt=200*0.65;
                Tamt=230+amt+Eamt+(unit-400)*0.80;
            }
                else
                {
                    amt=200*0.50;
                    Eamt=200*0.65;
                    EEamt=200*0.80;
                    Tamt=425+amt+Eamt+EEamt+(unit-600)*1.25;
                }
    printf("The consumer has to pay:%f",Tamt);
    return 0;   
}
/*#include <stdio.h>
int main() 
{
   int d1feet,d2feet,resultfeet;
   float d1inch,d2inch,resultinch;
   printf("Enter 1st distance:");
   printf("\nEnter feet= ");
   scanf("%d", &d1feet);
   printf("\nEnter inch= ");
   scanf("%f", &d1inch);
   printf("\nEnter 2nd distance:");
   printf("\nEnter feet= ");
   scanf("%d", &d2feet);
   printf("\nEnter inch= ");
   scanf("%f", &d2inch);
   resultfeet = d1feet + d2feet;
   resultinch = d1inch + d2inch; 
   while (resultinch >= 12.0) {
      resultinch = resultinch - 12.0;
      resultfeet++;
   }
   printf("\nSum of distances = %d feet %0.1f inches", resultfeet, resultinch);
   return 0;
}*/
