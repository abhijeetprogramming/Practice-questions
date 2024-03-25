
#include  <stdio.h> 

int main() {
    int score = 88;

    // Check if score is greater than 90
    if (score  >  90) {
        printf("Grade: A\n");
    } else {
        // Score is 90 or below, check if score is greater than 80
        if (score  >  80) {
            // Score is between 81 and 90, check if score is above 85
            if (score  >  85) {
                printf("Grade: A-\n");
            } else {
                printf("Grade: B+\n");
            }
        } else {
            // Score is 80 or below, check if score is above 70
            if (score  >  70) {
                printf("Grade: C\n");
            } else {
                printf("Grade: D\n");
            }
        }
    }
    return 0;
}