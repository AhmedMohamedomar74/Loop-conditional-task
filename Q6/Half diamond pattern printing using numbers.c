/**
******************************************************
*@file:Half diamond pattern printing using numbers.c
*@version:1.0.0
*@author:Ahmed Mohamed Omar
*@brief:tasks of Loop and coditions
******************************************************
*/
/* ***************includes section start************* */
#include<stdio.h>
/* ***************Includes section end**************** */

/* *************Definitions section start************* */
/* *************Definitions section end*************** */

/* *************Macros section srart*******************/
/* *************Macros section end*********************/

/* *************Global variables section srart******** */
    int Loop_Iterator_One;
    int Loop_Iterator_Two;
    int rows;
    int Begging_Number;
/* *************Global variables section end********** */

/* *************Global decelartions section srart****** */
/* *************Global decelartions section end******** */




int main()
{
    printf("enter the begging neumber=");
    scanf("%d",&Begging_Number);
    printf("enter the rows=");
    scanf("%d",&rows);
    for (Loop_Iterator_One=1;Loop_Iterator_One<=(rows+1)/2;Loop_Iterator_One++)
    {
        for (Loop_Iterator_Two=1;Loop_Iterator_Two<=Loop_Iterator_One;Loop_Iterator_Two++)
        {
            printf("%i",Begging_Number);
        }
        Begging_Number++;
        printf("\n");
    }
    Begging_Number=Begging_Number-2;
    for (Loop_Iterator_One=(rows+1)/2; Loop_Iterator_One>1; Loop_Iterator_One--)
    {
        for (Loop_Iterator_Two=1; Loop_Iterator_Two<Loop_Iterator_One; Loop_Iterator_Two++)
        {
            printf("%i",Begging_Number);
        }
        Begging_Number--;
        printf("\n");
    }
}
/* *************Sub program section srart****** */
/* *************Sub program section end******** */


/**
***********************************************************
user                    date            brief
************************************************************
Ahmed Mohamed Omar   12/7/2022 tasks of Loop and coditions

*/
