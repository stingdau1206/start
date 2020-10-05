#include <stdio.h>
#include <stdlib.h>

void print_statistics(unsigned char *array, unsigned int len); //- A function that prints the statistics of an array including minimum, maximum, mean, and median.

void print_array(unsigned char *array, unsigned int len); // - Given an array of data and a length, prints the array to the screen

float find_median(unsigned char *array, unsigned int len); //- Given an array of data and a length, returns the median value

float find_mean(unsigned char *array, unsigned int len); //- Given an array of data and a length, returns the mean

int find_maximum(unsigned char *array, unsigned int len); //- Given an array of data and a length, returns the maximum

int find_minimum(unsigned char *array, unsigned int len); //- Given an array of data and a length, returns the minimum

void sort_array(unsigned char *array, unsigned int len); //- Given an array of data and a length, sorts the array from largest to smallest.
