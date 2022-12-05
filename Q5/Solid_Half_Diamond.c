/**
******************************************************
*@file:Solid_Half_Diamond.c
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
    int rows ;
/* *************Global variables section end********** */

/* *************Global decelartions section srart****** */
/* *************Global decelartions section end******** */




int main()
{

    printf("enter number of the rows ");
    scanf("%i",&rows);
    for (Loop_Iterator_One=1;Loop_Iterator_One<=rows/2;Loop_Iterator_One++)
    {
        for (Loop_Iterator_Two=1;Loop_Iterator_Two<=Loop_Iterator_One;Loop_Iterator_Two++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (Loop_Iterator_One=rows/2-1; Loop_Iterator_One>=1; Loop_Iterator_One--)
    {
        for (Loop_Iterator_Two=1; Loop_Iterator_Two<=Loop_Iterator_One; Loop_Iterator_Two++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
/* *************Sub program section srart****** */
/* *************Sub program section end******** */

