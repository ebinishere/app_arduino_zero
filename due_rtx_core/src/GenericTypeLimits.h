/*************************************************************************************************
 * GenericTypeLimits.h -- Generic Type Limits
 *
 * Dependencies:    None
 * Processor:       LPC2148
 *
 * Complier:        Keil ARM Compiler
 *                  uVision
 * Company:         homelabs
 *
 * Author: Ebin Baby
 *
 * Copyright (c) 2013 homelabs.
 *
 *************************************************************************************************/


#ifndef GENERICTYPELIMITS_H
#define GENERICTYPELIMITS_H

#define INT8_MAX	0x7F
#define INT8_MIN 	(-0x7F-1)
#define INT16_MAX 	0x7FFF
#define INT16_MIN 	(-0x7FFF-1)
#define INT32_MAX 	0x7FFFFFFF
#define INT32_MIN 	(-0x7FFFFFFF-1)
#define INT64_MAX 	0x7FFFFFFFFFFFFFFF
#define INT64_MIN 	(-0x7FFFFFFFFFFFFFFF-1)

#define UINT8_MAX	0xFFU
#define UINT8_MIN	0x00U
#define UINT16_MAX 	0xFFFFU
#define UINT16_MIN 	0x0000U
#define UINT32_MAX 	0xFFFFFFFFUL
#define UINT32_MIN 	0x00000000UL
#define UINT64_MAX 	0xFFFFFFFFFFFFFFFFULL
#define UINT64_MIN 	0x0000000000000000ULL

#endif  /* GENERICTYPELIMITS_H */
