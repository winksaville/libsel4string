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
 * Compare two strings, returns 0 if they are identical.
 * return < 0 if the first non-matching character of str1
 * is < that of str2 or > 0 if str1 > str2.
 */
int
seL4_StrNCmp(const char *str1, const char *str2, int num) {
    int diff = 0;
    if (num > 0) {
        seL4_DebugAssert(str1 != seL4_Null);
        seL4_DebugAssert(str2 != seL4_Null);
        for (int i = 0; i < num; i++) {
            char ch1 = str1[i];
            char ch2 = str2[i];
            diff = ch1 - ch2;
            if (diff != 0) {
                return diff;
            }
        }
    }
    return diff;
}
