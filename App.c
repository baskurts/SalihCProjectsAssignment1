// pre-processor directives

// include needed C and header files
#include "Assignment.c"

// write code for main function

int main() {
    
    printf("Heart rate using direct values:\n");
    heartRate(age, restingPulse);

    
    printf("\nHeart rate using references:\n");
    heartRateReference(&age, &restingPulse);

    return 0;
}
