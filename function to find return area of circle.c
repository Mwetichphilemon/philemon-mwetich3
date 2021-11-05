/*function return to  find area of circle*/
#include <stdio.h>
float area(float r);
float input, answer;
int main(void)
{
    printf("enter the value of radius");
    scanf("%f", &input);
    answer=area (input);
    printf("/n areas of circle is% and %f", answer, input );
    return 0;
}
 float area(float r)
 {
    
    float area;
    float pi=3.142;
    area=pi*r*r;
    return area;
     
 }
