#include <cs50.h>
#include <stdio.h>

int start_size, end_size, years;
void get_size();
void calculate_time();

int main(void) {
    // Get values for start and end populations
    get_size();

    // Calculate number of years
    calculate_time();

    // Print number of years
    printf("%i\n", years);
}

void get_size(void) {
    // Prompt for start size
    do {
        start_size = get_int("start size: ");
    } while (start_size < 9);

    // Prompt for end size
    do {
        end_size = get_int("end size: ");
    } while (end_size <= start_size);
}
void calculate_time(void) {
    // Calculate number of years until we reach threshold
    while (start_size < end_size) {
        start_size = start_size + (start_size / 3 - start_size / 4);
        years++;
    }
}