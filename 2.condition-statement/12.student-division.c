#include<stdio.h>
int main(){
    float phy,chem,comAppli,Tmark,percentage,division;
    int rollno;
    printf("please enter the Roll number\n");
    scanf("%d", &rollno);
    printf("Please enter the phy, chem,c.a marks\n");
    scanf("%f %f %f",&phy,&chem,&comAppli);

    Tmark = phy+chem+comAppli;
    percentage = (phy+chem+comAppli)/3;
    printf("Roll no: %d\n",rollno);
    printf("Name of the student : Ajith\n");
    printf("Mark in physics : %.2f\n",phy);
    printf("Mark in chemistry : %.2f\n",chem);
    printf("Mark in computerappllication : %f\n",comAppli);
    printf("Total Mark : %.2f\n",Tmark);
    printf("Percentage : %.2f\n",percentage);

    if(percentage>=75){
        printf("Division = Distinction\n");
    }
    else if(percentage>=60 && percentage<75){
        printf("Division = First\n");
    }
    if(percentage>=50 && percentage<60){
        printf("Division = Second\n");
    }
    if(percentage>=40 && percentage<50){
        printf("Division = Third\n");
    }
    return 0;

}