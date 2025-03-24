#include <stdio.h>
#include <stdlib.h>

int main(){
    float physics[4],chemistry[4],math[4];
    float physics_average,chemistry_average,math_average,average_marks;


   printf("Enter marks for physics\n");
    for(int i=0; i<4; i++){
    printf("test: %d\n",i+1);
    scanf("%f",&physics[i]);

    }

   printf("Enter marks for chemistry\n");
    for(int i=0; i<4; i++){
    printf("test: %d\n",i+1);
    scanf("%f",&chemistry[i]);

    }

   printf("Enter marks for math\n");
    for(int i=0; i<4; i++){
    printf("test: %d\n",i+1);
    scanf("%f",&math[i]);


    }
    physics_average=(physics[0]+physics[1]+physics[2]+physics[3])/4;
    chemistry_average=(chemistry[0]+chemistry[1]+chemistry[2]+chemistry[3])/4;
    math_average=(math[0]+math[1]+math[2]+math[3])/4;
    average_marks=(physics_average+chemistry_average+math_average)/3;


    printf("physics average is %.2lf\n",physics_average);
    printf("chemistry average is %.2lf\n",chemistry_average);
    printf("math average is %.2lf\n",math_average);
    printf("Average marks is %.2lf",average_marks);


    return 0;
}
