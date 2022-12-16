/**
******************************************************
*@file:Diagonal & Sides of a Rectangle.h
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
int Loop_iterator_one;
int Loop_iterator_two;
/* *************Global variables section end********** */

/* *************Global decelartions section srart****** */
void Diagonal_Sides_of_a_Rectangle ();
/* *************Global decelartions section end******** */


/* *************Sub program section srart****** */
void Diagonal_Sides_of_a_Rectangle ()
{   int n;
    printf("enter number of rows=");
    scanf("%i",&n);
    for (Loop_iterator_one=0;Loop_iterator_one<n;Loop_iterator_one++)
    {
        for (Loop_iterator_two=0;Loop_iterator_two<n;Loop_iterator_two++)
        {
            if ((0==Loop_iterator_one)||(n-1==Loop_iterator_one)||(0==Loop_iterator_two)||(n-1==Loop_iterator_two)||(Loop_iterator_one+Loop_iterator_two==n-1)||(Loop_iterator_one==Loop_iterator_two))
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
/* *************Sub program section end******** */


/**
***********************************************************
user                    date            brief
************************************************************
Ahmed Mohamed Omar   12/16/2022 tasks of Loop and coditions

*/
