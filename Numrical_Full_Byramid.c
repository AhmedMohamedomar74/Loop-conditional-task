/**
******************************************************
*@fileC:Numrical_Full_Byramid.c
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
int Loop_Iterator_Four;
int rows,k;
/* *************Global variables section end********** */

/* *************Global decelartions section srart****** */
/* *************Global decelartions section end******** */



int main()
{
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    for (Loop_Iterator_One=1;Loop_Iterator_One<=rows;Loop_Iterator_One++)
    {
        for (Loop_Iterator_Two=1 ; Loop_Iterator_Two<= ( rows - Loop_Iterator_One ); Loop_Iterator_Two++)
        {
            printf(" ");
        }
        for (Loop_Iterator_Three=Loop_Iterator_One; Loop_Iterator_Three<= (2*Loop_Iterator_One -1);++Loop_Iterator_Three)
        {
            printf("%i",Loop_Iterator_Three);
        }
        //printf("\n Loop3=%i",Loop_Iterator_Three);
        //printf("\n Loop1=%i",Loop_Iterator_One);
        k=Loop_Iterator_Three-1;
        //printf("\n k=%i",k);
        if (k==(2*Loop_Iterator_One -1))
        {
            for ( Loop_Iterator_Four=k-1; Loop_Iterator_Four>=Loop_Iterator_One; Loop_Iterator_Four--)
            {
                printf("%i",Loop_Iterator_Four);
            }
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
Ahmed Mohamed Omar   12/1/2022 tasks of Loop and coditions
*/
