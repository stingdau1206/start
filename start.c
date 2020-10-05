#include "start.h"

void print_statistics(unsigned char *array, unsigned int len)
{
    printf("max: %d\n",find_maximum(array, len));
    printf("min: %d\n",find_minimum(array, len));
    printf("median: %.2f\n",(float) find_median(array, len));
    printf("mean: %.2f\n",(float) find_mean(array, len));
}

void print_array(unsigned char *array, unsigned int len)
{
    for (int i=0; i<len; i++)
    {
        printf("%d ",array[i]);
    }
} 

float find_median(unsigned char *array, unsigned int len)
{
    float median = (float) (find_maximum(array, len) + find_minimum(array, len))/2;
    return median;
}

float find_mean(unsigned char *array, unsigned int len)
{
    float mean = array[0];
    for (int i = 1; i < len; i++)
    {
        mean += array[i];
    }
    mean = mean/len;
    return mean;
}

int find_maximum(unsigned char *array, unsigned int len)
{
    int max = array[0];
    int i =1;
    for (; i < len; i++)
    {
        if (array[i] >= max)
        {
            max = array[i];
        }
    }
    return max;
}

int find_minimum(unsigned char *array, unsigned int len)
{
    int i =1;
    int min = array[0];
    for (; i < len; i++)
    {
        if (array[i] <= min)
        {
            min = array[i];
        }
    }
    return min;
}

void sort_array(unsigned char *array, unsigned int len)
{
    int tg;
    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j < len; j++){
            if(array[i] < array[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = array[i];
                array[i] = array[j];
                array[j] = tg;        
            }
        }
    }
}

void main()
{
    unsigned char a[4]= {18, 24, 13, 03};
    print_statistics(a, 4);
}