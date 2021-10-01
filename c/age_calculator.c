#include <stdio.h>
#include <time.h>

int main()
{
    time_t s, val = 1;
    struct tm* current_time;
    
    s = time(NULL);
    
    current_time = localtime(&s);
    
    int n,Age;
    printf("\nCalculate your Age !!!\n");
    printf("\nEnter Your Birth Year\n");
    scanf("%d",&n);
    
    Age = ((current_time->tm_year + 1900)-n);
    printf("\nYour age is %d\n",Age);
 return 0;   
}    