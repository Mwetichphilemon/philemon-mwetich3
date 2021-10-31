
#include <stdio.h> extern int x = 32; int b = 8; int main() {    auto int a = 28;    extern int b;    printf("The value of auto variable : %d\n", a);    printf("The value of extern variables x and b : %d,%d\n",x,b);    x = 15;    printf("The value of modified extern variable x : %d\n",x);    return 0; }
int main()
{
int mat,eng,kis,sci,social, average;
    printf("enter the value of mat,kis,sci,social, average");
    scanf("%d %d %d %d %d",&mat,&eng,&kis,&sci,&social);
    average=(mat+eng+kis+sci+social)/5;
    printf("\average=%d,average");
    if(average>=90&&average<=100)
    {
    printf("\n you have an'A'");
    }
    else if(average>=80&&average<=90)
    {
    printf("\n you have a'B'");
    }
    else if(average>=70&&average<=80)
    {
    printf("\n you have a'C'");
    }
    else if(average>=60&&average<=70)
    {
    printf("\n you have a 'D'");
    }
    else if(average>=50&&average<=60)
    {
    printf("\n you have an 'E'");
    }
    else
    {
    printf("\n you 'fail'");
    }
    return 0;
}
