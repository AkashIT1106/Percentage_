#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter 5 subject marks:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int sum=a+b+c+d+e;
    float percentage=(float)sum/5;
    if (a>100 || b>100 ||c>100 || d>100 ||e>100){
        printf("Invalid input!");
    }
    else{
        if(percentage>=95){
            printf("A");
        }
        else if(percentage>=85){
            printf("B");
        }
        else if(percentage>=75){
            printf("C");
        }
        else if(percentage>=65){
            printf("D");
        }
        else if(percentage>=45){
            printf("E");
        }else{
            printf("fail");
        }
    }
    

}