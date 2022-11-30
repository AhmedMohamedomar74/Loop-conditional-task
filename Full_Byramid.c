/**
******************************************************
*@file:Full_Byramid.c
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
    int rows;
    printf("enter number of rows=\n");
    scanf("%i",&rows);
    for (Loop_Iterator_One=1;Loop_Iterator_One<=rows;Loop_Iterator_One++,k=0)
    {
      for ( Loop_Iterator_Two=1;Loop_Iterator_Two<=(rows-Loop_Iterator_One);Loop_Iterator_Two++)
      {
          printf(" ");
      }
      while(k!=2*Loop_Iterator_One-1)
      {
          printf("*");
          ++k;
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
