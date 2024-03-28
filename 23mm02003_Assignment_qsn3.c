#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} DATE;
int compare(DATE *date_1, DATE *date_2)
{
    if (date_1->year > date_2->year)
        return 1;
    else if (date_1->year == date_2->year)
    {
        if (date_1->month > date_2->month)
            return 1;
        else if (date_1->month == date_2->month)
        {
            if (date_1->day > date_2->day)
                return 1;
            {
                if (date_1->day == date_2->day)
                    return 0;
            }
        }
    }
    else
        return -1;
}
int main()
{

    DATE DATE1, DATE2;
    int dateArray1[3]; 
    int dateArray2[3];

    printf("Enter the day for DATE1: ");
    scanf("%d", &dateArray1[0]); 
    printf("Enter the month for DATE1: ");
    scanf("%d", &dateArray1[1]); 
    printf("Enter the year for DATE1: ");
    scanf("%d", &dateArray1[2]); 

    printf("Enter the day for DATE2: ");
    scanf("%d", &dateArray2[0]);
    printf("Enter the month for DATE2: ");
    scanf("%d", &dateArray2[1]); 
    printf("Enter the year for DATE2: ");
    scanf("%d", &dateArray2[2]); 

   
    DATE1.day = dateArray1[0];
    DATE1.month = dateArray1[1];
    DATE1.year = dateArray1[2];

    DATE2.day = dateArray2[0];
    DATE2.month = dateArray2[1];
    DATE2.year = dateArray2[2];

    
    int result = compare(&DATE1, &DATE2);
    if (result == 1)
    {
        printf("DATE1 is later than DATE2.\n");
    }
    else if (result == 0)
    {
        printf("DATE1 is equal to DATE2.\n");
    }
    else
    {
        printf("DATE1 is earlier than DATE2.\n");
    }

    return 0;
}