#include <stdio.h>
int main(){
    int eng, math, comp, ssc, sc;
    int total;
    printf ("Enter the marks: \n");
    printf("--------------Please Provide Marks Here-----------------\n");
    scanf("%d",&eng);
    scanf("%d",&comp);
    scanf("%d",&ssc);
    scanf("%d",&sc);
    scanf("%d",&math);
    total = (eng+sc+ssc+comp+math)*100/500;
    // total = (total * 100) / 500;
    
    printf("%d\n",total);
    if (total >= 60){
        printf("1st Division");
    }else if((total >= 50) && (total <= 59)){
        printf("2nd Division");
    }else if((total >= 40) && (total <= 49)){
        printf("3rd Division");
    }else if(total < 40){
        printf("Fail");
    }
    return 0;
}