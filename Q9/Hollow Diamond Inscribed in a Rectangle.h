/**
******************************************************
*@file:Hollow Diamond Inscribed in a Rectangle.h
*@version:1.0.0
*@author:Ahmed Mohamed Omar
*@brief:tasks of Loop and coditions
******************************************************
*/
/* *************Global variables section srart******** */
    int Loop_Iterator_One;
    int Loop_Iterator_Two;
    int rows;
/* *************Global variables section end********** */
/* *************Global decelartions section srart****** */
    void First_Part(int rows);
    void Second_Part (int rows);
/* *************Global decelartions section end******** */


/* *************Sub program section srart****** */
void First_Part(int rows)
{
    for (Loop_Iterator_One=rows/2; Loop_Iterator_One>=1; Loop_Iterator_One--)
    {
        for (Loop_Iterator_Two=1 ; Loop_Iterator_Two <= Loop_Iterator_One ; Loop_Iterator_Two++)
        {
            printf("* ");
        }
        if (rows==Loop_Iterator_One)
        {
            for (Loop_Iterator_Two=Loop_Iterator_One ; Loop_Iterator_Two >=1  ; Loop_Iterator_Two--)
            {
                printf("* ");
            }
        }
        else
        {
            for (Loop_Iterator_Two=1; Loop_Iterator_Two<=((rows/2-Loop_Iterator_One)*2); Loop_Iterator_Two++)
            {
                printf("  ");
            }
            for (Loop_Iterator_Two=Loop_Iterator_One ; Loop_Iterator_Two >=1  ; Loop_Iterator_Two--)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}
void Second_Part (int rows)
{
    for (Loop_Iterator_One=1; Loop_Iterator_One<=rows/2; Loop_Iterator_One++)
    {
        for (Loop_Iterator_Two=1 ; Loop_Iterator_Two <= Loop_Iterator_One ; Loop_Iterator_Two++)
        {
            printf("* ");
        }
        if (rows==Loop_Iterator_One)
        {
            for (Loop_Iterator_Two=Loop_Iterator_One ; Loop_Iterator_Two >=1  ; Loop_Iterator_Two--)
            {
                printf("* ");
            }
        }
        else
        {
            for (Loop_Iterator_Two=1; Loop_Iterator_Two<=((rows/2-Loop_Iterator_One)*2); Loop_Iterator_Two++)
            {
                printf("  ");
            }
            for (Loop_Iterator_Two=Loop_Iterator_One ; Loop_Iterator_Two >=1  ; Loop_Iterator_Two--)
            {
                printf("* ");
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
Ahmed Mohamed Omar   12/8/2022 tasks of Loop and coditions

*/
