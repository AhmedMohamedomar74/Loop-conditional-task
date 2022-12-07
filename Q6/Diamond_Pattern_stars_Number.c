/**
******************************************************
*@file:Diamond_Pattern_stars_Number.c
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
    int rows;
    int count=1;
/* *************Global variables section end********** */

/* *************Global decelartions section srart****** */
/* *************Global decelartions section end******** */




int main()
{
    printf("Enter Number of the rows=");
    scanf("%i",&rows);
    for (Loop_Iterator_One=1;Loop_Iterator_One<=rows/2;Loop_Iterator_One++)
    {
        if (1==Loop_Iterator_One)
        {
            printf("* ");
        }
        else
        {
           printf("* ");
           for (Loop_Iterator_Two=1;Loop_Iterator_Two<=(Loop_Iterator_One-1);Loop_Iterator_Two++)
           {
                printf("%i ",Loop_Iterator_Two);
           }
           for (Loop_Iterator_Two=(Loop_Iterator_One-2);Loop_Iterator_Two>=1;Loop_Iterator_Two--)
           {
               printf("%i ",Loop_Iterator_Two);
           }
           printf("* ");
        }
        printf("\n");
    }
    for (Loop_Iterator_One=rows/2-1;Loop_Iterator_One>=1;Loop_Iterator_One--)
    {
        if (1==Loop_Iterator_One)
        {
            printf("* ");
        }
        else
        {
           printf("* ");
           for (Loop_Iterator_Two=1;Loop_Iterator_Two<=(Loop_Iterator_One-1);Loop_Iterator_Two++)
           {
                printf("%i ",Loop_Iterator_Two);
           }
           for (Loop_Iterator_Two=(Loop_Iterator_One-2);Loop_Iterator_Two>=1;Loop_Iterator_Two--)
           {
               printf("%i ",Loop_Iterator_Two);
           }
           printf("* ");
        }
        printf("\n");
    }
}
/* *************Sub program section srart****** */
void test ()
{
        for (Loop_Iterator_One=1;Loop_Iterator_One<=5;Loop_Iterator_One++)
    {
        printf("%i ",Loop_Iterator_One);
    }
    for (Loop_Iterator_One=4;Loop_Iterator_One>=1;Loop_Iterator_One--)
    {
        printf("%i ",Loop_Iterator_One);
    }
}
/* *************Sub program section end******** */


/**
***********************************************************
user                    date            brief
************************************************************
Ahmed Mohamed Omar   12/7/2022 tasks of Loop and coditions

*/
