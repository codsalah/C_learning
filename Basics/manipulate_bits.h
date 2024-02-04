/**
 * @file manipulate_bits.h
 * @brief Macros vs Functions
 *
 * Macros:
 * 1) Macros are pre-processed -> Processed before your program compiles.
 * 2) No type checking (incompatible operand) is done -> Errors/side-effects in some cases.
 * 3) Macros do not check for compilation error (if any).
 * 4) Difficult to debug as they cause simple replacement.
 * 5) Using Macro increases the code length.
 * 6) Speed of Execution using macro is Faster.
 * 7) Macros are useful when small code is repeated many times.
 * 8) Macro does not check any Compile-Time Errors.
 *
 * Functions:
 * 1) Functions are not preprocessed but "compiled".
 * 2) There is type checking -> Warning if an issue is found.
 * 3) Check for compilation error (if any).
 * 4) Easy to debug and the stack frame located in the stack memory.
 * 5) Using Function keeps the code length unaffected.
 * 6) Speed of Execution using functions is slower than macros.
 * 7) Functions are useful when large code is to be written.
 * 8) Macro does not check any Compile-Time Errors.
 */


#ifndef MANIPULATE_BITS_H
#define MANIPULATE_BITS_H

#include <stdint.h>

#define toggle_bit(var, pos)    ((var) ^= (1 << (pos)))
#define set_bit(var, pos)       ((var) |= (1 << (pos)))
#define clear_bit(var, pos)     ((var) &= ~(1 << (pos)))

#endif /* MANIPULATE_BITS_H */