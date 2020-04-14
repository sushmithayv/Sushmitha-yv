//program to display highest marks in each subject from 2-D array of marks of 5 students in 3 subjects
#include<stdio.h>
int main()
{
    int marks[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int j=0;j<3;j++)
    {
        int highest;
        highest=marks[0][j];
        for(int i=1;i<5;i++)
    {


    if(marks[i][j]>highest)
    {
        highest=marks[i][j];
    }

    }
    printf("highest marks in subject %d is %d\n",j+1,highest);
    }
    return 0;
    }


