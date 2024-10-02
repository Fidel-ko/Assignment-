#include<stdio.h>
/*Author:Fidel 
reg No:CT101/G/23159/24
*/

int main()
{
    int book_id;
    int due_date;
    int return_date;
    int over_due_date;
    printf ("enter the book id:");
    scanf ("%d",&book_id);
    
    printf ("enter the due date :");
    scanf ("%d",&due_date);
    
    printf ("enter the return date:");
    scanf ("%d",&return_date);
    
    over_due_date=due_date-return_date;
    if (over_due_date<=7){
    int fine_rate=20;
    int fine_amount=fine_rate*over_due_date;
    printf ("the fine amount is:%2d",fine_amount);
    }
    else if (over_due_date<15){
    int fine_rate=50;
    int fine_amount=fine_rate*over_due_date;
    printf ("the fine amount is: %2d",fine_amount);
    }
    else {
    int fine_rate=100;
    int fine_amount=fine_rate*over_due_date;
    printf ("the fine amount is:%2d",fine_amount );
    }
    printf ("\nthe book_id is:%d",book_id);
    printf("\nthe duedate is :%d",due_date);
    printf ("\nthe returndate is :%d",return_date);
    printf("\nthe over due date is :%d",over_due_date);
    return 0;
    }
    
