/**
******************************************************
*@fileC:Numrical_Hollow_Full_Byramid.c
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
    int i, j, n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = i; j < n; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            if(j == 1 || i == n)
            {
                printf("%d ", j);
            }
            else
            {
                printf(" ");
            }
        }
        for(j = 1; j < i; j++)
        {
            if(j == i-1 && j < n-1)
            {
                printf("%d", j+1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/* *************Sub program section srart****** */
/* *************Sub program section end******** */


/**
***********************************************************
user                    date            brief
************************************************************
Ahmed Mohamed Omar   12/1/2022 tasks of Loop and coditions
*/
