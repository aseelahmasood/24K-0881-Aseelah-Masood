#include<stdio.h>
int main(){
	int exam_marks,attendance,assignment_score;
    printf("Enter your exam marks ");
	scanf("%d",&exam_marks);
	printf("Enter your attendance ");
	scanf("%d",&attendance);
	printf("Enter your assignment score ");
	scanf("%d",&assignment_score);
	
	if((exam_marks<50)||(attendance<50)||(assignment_score<50))
    {
        printf("Grade F");
    }
    else if((exam_marks>=50 && exam_marks<60)||(attendance>=50 && attendance<60)||(assignment_score>=50 && assignment_score<60))
    {
        printf("Grade D");
    }
    else if((exam_marks>=60 && exam_marks<70)||(attendance>=60 && attendance<70)||(assignment_score>=60 && assignment_score<70))
    {
        printf("Grade C");
    }
    else if((exam_marks>=70 && exam_marks<80)||(attendance>=70 && attendance<80)||(assignment_score>=70 && assignment_score<80))
    {
        printf("Grade B");
    }
    else if((exam_marks>=80 && exam_marks<90)||(attendance>=80 && attendance<90)||(assignment_score>=80 && assignment_score<90))
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}

