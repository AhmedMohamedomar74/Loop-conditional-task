/**
******************************************************
*@file:Stars_Plindrome.c
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
/* *************Global variables section end********** */

/* *************Global decelartions section srart****** */
/* *************Global decelartions section end******** */




int main()
{

    for ( Loop_Iterator_One =1; Loop_Iterator_One<=5; Loop_Iterator_One++)
    {
        for (Loop_Iterator_Two =1; Loop_Iterator_Two<=(9-Loop_Iterator_One);Loop_Iterator_Two++)
        {
            printf("*");
        }
        for (Loop_Iterator_Two=1;Loop_Iterator_Two<=Loop_Iterator_One;Loop_Iterator_Two++)
        {
            printf("%i",Loop_Iterator_One);
            printf("*");
        }
        for (Loop_Iterator_Two =1; Loop_Iterator_Two<=(8-Loop_Iterator_One);Loop_Iterator_Two++)
        {
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
Ahmed Mohamed Omar   12/4/2022 tasks of Loop and coditions

*/
