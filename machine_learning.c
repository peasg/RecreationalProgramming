#include <stdio.h>
#include <stdlib.h>
#include <time>

float train[][2] = {
    {0,0},
    {1,1},
    {2,4},
    {3,9},
    {4,16},
};

#define train_count (sizeof(train)/sizeof(train[0]))

float rand_float(void)
{    
    return (float) rand()/ (float) RAND_MAX;
}



