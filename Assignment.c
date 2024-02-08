// pre-processor directives

// include needed header file
#include "./headers/Assignment.h"

// write code for functions declared in header file

// Create the heartRate function. This function uses do-while statement
void heartRate(int age, int restingPulse) {

    // declare variable of type double that will be used in conditions
    // initialize it using macro values defined in header file
    double intensity = START;
    printf("Intensity   Heart Rate\n");

    // Use an do-while statement 
    do {
        double targetHeartRate = (((220 - age) - restingPulse) * intensity) + restingPulse;

        printf("%-10.0f%% %3.0f bpm\n", intensity * 100, targetHeartRate);

        intensity += 0.05; // Increase intensity by 5%
    } while (STOP(intensity));
}

// Create the heartRateReference function
void heartRateReference(int *age, int *restingPulse) {

    double intensity = START;

    printf("Intensity   Heart Rate\n");

    // Use an do-while statement 
    do {
        double targetHeartRate = (((220 - *age) - *restingPulse) * intensity) + *restingPulse;

        printf("%-10.0f%% %3.0f bpm\n", intensity * 100, targetHeartRate);

        intensity += 0.05; // Increase intensity by 5%
    } while (STOP(intensity));
}
