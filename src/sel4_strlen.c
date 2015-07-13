/*
 * copyright 2015, Wink Saville
 *
 * this software may be distributed and modified according to the terms of
 * the bsd 2-clause license. note that no warranty is provided.
 * see "license_bsd2.txt" for details.
 */

#include <sel4/simple_types.h>
#include <sel4/string.h>
#include <sel4/debug_assert.h>

/**
 * Return the length of the string in bytes.
 */
int
seL4_StrLen(const char *str) {
    int result = 0;
    if (str != seL4_Null) {
        const char *zero = str;
        while (*zero != 0) {
            zero += 1;
        }
        result = zero - str;
    }
    return result;
}
