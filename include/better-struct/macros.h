#ifndef BETTER_STRUCT_MACROS_H
#define BETTER_STRUCT_MACROS_H

#include "./macros_utility.h"

#define BETTER_STRUCT_FIELDS(...) __BETTER_STRUCT_FIELDS(__VA_ARGS__)

#define BETTER_STRUCT_DECLARE(struct, fields, ...) __BETTER_STRUCT_DECLARE(struct, fields, __VA_ARGS__)

#endif  // BETTER_STRUCT_MACROS_H
