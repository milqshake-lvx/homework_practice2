#include <stdio.h>
#include <math.h>

int main() 
{
    float X = 12.0;
    float Y = 15.0;
    float average = (X+Y)/2.;
    float diff_X = X - average;
    float diff_Y = Y - average;
    
    printf("___________Задача №33___________\n");
    printf("Возраст Коли: %.1f лет\nВозраст Миши: %.1f лет\n", X, Y);
    printf("Средний возраст %.1f лет\n\n", average);
    printf("Возраст Коли отличается от среднего на %.1f лет\n", diff_X);
    printf("Возраст Миши отличается от среднего на %.1f лет\n", diff_Y);

    return 0;
}
