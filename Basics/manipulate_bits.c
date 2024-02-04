#include <stdio.h>
#include "manipulate_bits.h"

int main() {
    uint8_t value = 0x01; // Binary: 0001

    printf("Initial value: %d\n", value);

    // Toggle bit at position 2
    toggle_bit(value, 2);
    printf("After toggling bit 2: %d\n", value);

    // Set bit at position 3
    set_bit(value, 3);
    printf("After setting bit 3: %d\n", value);

    // Clear bit at position 1
    clear_bit(value, 1);
    printf("After clearing bit 1: %d\n", value);

    return 0;
}