// codigo desarrollodo por daniel garzon y sergio plazas 
#include <stdio.h>
double MinMax(double vector[], int &cant ){
    double min;
    double max;
    for(int i = 0; i < cant-1; i++){
        if(vector[i] > vector[i+1]){
            max = vector[i];
        }
        else if(vector[i] < vector[i+1]){
            min = vector[i];
        }
    }
    return min,max;
};
