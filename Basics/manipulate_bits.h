#ifndef MANIPULATE_BITS_H
#define MANIPULATE_BITS_H

#include <stdint.h>

#define toggle_bit(var, pos)    ((var) ^= (1 << (pos)))
#define set_bit(var, pos)       ((var) |= (1 << (pos)))
#define clear_bit(var, pos)     ((var) &= ~(1 << (pos)))

#endif /* MANIPULATE_BITS_H */