#ifndef BETTER_STRUCT_MACROS_UTILITY_H
#define BETTER_STRUCT_MACROS_UTILITY_H

#define __BETTER_STRUCT_STR(x) #x
#define __BETTER_STRUCT_CONCAT(x, y) __BETTER_STRUCT_CONCAT_(x, y)
#define __BETTER_STRUCT_CONCAT_(x, y) x##y

#endif  // BETTER_STRUCT_MACROS_UTILITY_H
