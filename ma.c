#include<stdio.h>
int main(){
    int month;
    printf("Enter The month:");
    scanf("%d",&month);
    switch(month){
        case(1):
            printf("Your Month is January\n");
            printf("Jan has 31 days");
            break;
        case(2):
            printf("Your Month is february\n");
            printf("Feb has 29 days");
            break;
        case(3):
            printf("Your Month is March\n");
            printf("Mar has 31 days");
            break;
        case(4):
            printf("Your Month is April\n");
            printf("Apr has 30 days");
            break;
        case(5):
            printf("Your Month is May\n");
            printf("May has 31 days");
            break;
        case(6):
            printf("Your Month is June\n");
            printf("June has 30 days");    
            break;
        case(7):
            printf("Your Month is July\n");
            printf("July has 31 days");
            break;
        case(8):
            printf("Your Month is August\n");
            printf("Aug has 31 days");
            break;
        case(9):
            printf("Your Month is September\n");
            printf("Sep has 30 days");
            break;
        case(10):
            printf("Your Month is October\n");
            printf("Oct has 31 days");
            break;
        case(11):
            printf("Your Month is November\n");
            printf("Nov has 30 days");
            break;
        case(12):
            printf("Your Month is December\n");
            printf("Dec has 31 days");
            break;
        
    }

}