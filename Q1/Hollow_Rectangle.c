/**
******************************************************
*@file:Hollow_Rectangle.c
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
int Loop_Iterator_Three;
int k;
int Number_count=3;
/* *************Global variables section end********** */

/* *************Global decelartions section srart****** */
/* *************Global decelartions section end******** */



int main()
{
       for (Loop_Iterator_One=0;Loop_Iterator_One<Number_count;Loop_Iterator_One++)
    {

        if (Loop_Iterator_One==0||Loop_Iterator_One==Number_count-1)
        {
            for (Loop_Iterator_Two=0;Loop_Iterator_Two<5;Loop_Iterator_Two++)
            {
                printf("*");
            }

        }
        else
        {
            printf("*");
            for (Loop_Iterator_Two=0;Loop_Iterator_Two<3;Loop_Iterator_Two++)
            {
                printf(" ");
            }
            printf("*");
            }
            printf("\n");
    }
}
/* *************Sub program section srart****** */
/* *************Sub program section end******** */


/**
***********************************************************
user                    date            brief
************************************************************
Ahmed Mohamed Omar   11/28/2022 tasks of Loop and coditions
*/
