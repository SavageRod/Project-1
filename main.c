#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //column 1 is x coordinate, collumn 2 is y coordinate
    //collumn 3 is the class(1 or -1), collumn 4 is the weight
    //data1 is linearly seperable, data2 is not linearly seperable
    //the points range from 0-50 inclusive, data1 line for seperability is y = 25
    int data1[50][4];
    int data2[50][4];
    int test[30][4];
    
    time_t t;
    srand((unsigned) time(&t));
    
    //initialize data sets
    for(int i = 0; i < 50; i++) {
        if (i < 25) {
            data1[i][1] = rand() % 25;
            data1[i][2] = -1;
        }
        if (i >= 25) {
            data1[i][1] = ((rand() % 26)+25);
            data1[i][2] = 1;
            
        }
        data1[i][0] = rand() % 51;
        
        data2[i][0] = rand() %51;
        data2[i][1] = rand() % 51;
        int temp = rand() % 2; //0 or 1
        if (temp == 0)
            data2[i][2] = -1;
        else
            data2[i][2] = 1;
        
        //prints data
        //printf("%i, %i  class: %i\n", data1[i][0],data1[i][1], data1[i][2]);
        //printf("%i, %i  class: %i\n", data2[i][0],data2[i][1], data2[i][2]);
    }
    
    //initialize test set
    for(int i = 0; i < 30; i++) {
        test[i][0] = rand() %51;
        test[i][1] = rand() % 51;
    }

    return 0;
}
