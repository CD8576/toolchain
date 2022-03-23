/**
 * @file
 * @authors
 * Matt "MateoConLechuga" Waltz\n
 * Jacob "jacobly" Young
 * @brief Miscellaneous CE define file
 */

#ifndef _CEUTIL_H
#define _CEUTIL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Returns a pseudo-random integer in the range of \p min to \p max (inclusive).
 */
#define randInt(min, max) \
    ((unsigned)random() % ((max) - (min) + 1) + (min))


/**
 * Gets an element from a matrix
 *
 * @param matrix Structure of matrix
 * @param row Row in matrix
 * @param col Column in matrix
 * @returns real_t containing element data
 */
#define matrix_element(matrix, row, col) ((matrix)->items[(row)+(col)*(matrix)->rows])


/**
 * Returns a pseudo-random 32-bit integer.
 *
 * @return the random integer
 */
uint32_t random(void);

/**
 * Seeds the pseudo-random number generator used by random() and rand() with the
 * value seed.
 *
 * @param seed the seed value
 */
void srandom(uint32_t seed);


/**
 * "Atomically" loads from a volatile 32-bit value.
 *
 * @remarks
 * The hardware does not provide a mechanism to truly atomically load from a
 * 32-bit value. This "atomic" load is implemented by non-atomically reading the
 * value twice and retrying if the values read differ.
 *
 * @attention
 * If the maximum period between two value changes is 1us or less (assuming a
 * CPU clock speed of 48MHz), then this function may never complete. For
 * instance, the counter of a timer ticking at 1MHz or more should not be read
 * using this function. In such a case of a purely increasing or decreasing
 * value, atomic_load_increasing_32() or atomic_load_decreasing_32() may be
 * appropriate instead.
 *
 * @param p pointer to 32-bit value
 */
uint32_t atomic_load_32(volatile uint32_t *p);

/**
 * "Atomically" loads from a volatile, increasing 32-bit value.
 *
 * @remarks
 * The hardware does not provide a mechanism to truly atomically load from a
 * 32-bit value. This "atomic" load is implemented by temporarily disabling
 * interrupts while non-atomically reading the value twice and then returning
 * the lesser of the two values read.
 *
 * @attention
 * If the minimum period between two value changes is 5us or less and the
 * value's maximum rate of change over a 5us period exceeds 256 (assuming a CPU
 * clock speed of 48MHz), then the value returned may be incorrect. Of relevant
 * note may be the fact that a 48MHz counter does not exceed this limit.
 *
 * @param p pointer to 32-bit value
 */
uint32_t atomic_load_increasing_32(volatile uint32_t *p);

/**
 * "Atomically" loads from a volatile, decreasing 32-bit value.
 *
 * @remarks
 * The hardware does not provide a mechanism to truly atomically load from a
 * 32-bit value. This "atomic" load is implemented by temporarily disabling
 * interrupts while non-atomically reading the value twice and then returning
 * the greater of the two values read.
 *
 * @attention
 * If the minimum period between two value changes is 5us or less and the
 * value's maximum rate of change over a 5us period exceeds 256 (assuming a CPU
 * clock speed of 48MHz), then the value returned may be incorrect. Of relevant
 * note may be the fact that a 48MHz counter does not exceed this limit.
 *
 * @param p pointer to 32-bit value
 */
uint32_t atomic_load_decreasing_32(volatile uint32_t *p);

#ifdef __cplusplus
}
#endif

#endif
