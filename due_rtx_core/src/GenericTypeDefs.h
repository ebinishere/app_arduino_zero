/*************************************************************************************************
 * GenericTypeDefs.h -- Generic Type Definitions
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
#ifndef  GENERIC_TYPE_DEFS_H
#define  GENERIC_TYPE_DEFS_H

/*********************** Basic Data Types ********************************************************/

/* Integer (int) is processor specific in length may vary in size */
typedef signed char         INT8;       /* (byte-aligned) */
typedef signed short int    INT16;      /* (halfword-aligned) */
typedef signed long int     INT32;      /* (word-aligned) */
typedef signed long long    INT64;      /* (doubleword-aligned) */

typedef unsigned char       UINT8;
typedef unsigned short int  UINT16;
typedef unsigned long int   UINT32;
typedef unsigned long long  UINT64;

/* Double is processor specific in length may vary in size */
typedef float               FLOAT32;     /* (word-aligned) */
typedef long double         FLOAT64;     /* (doubleword-aligned) */

/*********************** Types to Extract Bits from Basic Data Types *****************************/

typedef union
{
    UINT8 Val;
    struct
    {
        UINT8 b0:1;
        UINT8 b1:1;
        UINT8 b2:1;
        UINT8 b3:1;
        UINT8 b4:1;
        UINT8 b5:1;
        UINT8 b6:1;
        UINT8 b7:1;
    } bits;
} UINT8_Bits_t;

typedef union
{
    UINT16 Val;
    UINT8 v[2];
    struct
    {
        UINT8 LB;
        UINT8 HB;
    } byte;
    struct
    {
        UINT8 b0:1;
        UINT8 b1:1;
        UINT8 b2:1;
        UINT8 b3:1;
        UINT8 b4:1;
        UINT8 b5:1;
        UINT8 b6:1;
        UINT8 b7:1;
        UINT8 b8:1;
        UINT8 b9:1;
        UINT8 b10:1;
        UINT8 b11:1;
        UINT8 b12:1;
        UINT8 b13:1;
        UINT8 b14:1;
        UINT8 b15:1;
    } bits;
} UINT16_Bits_t;

typedef union
{
    UINT32 Val;
    UINT16 w[2];
    UINT8  v[4];
    struct
    {
        UINT16 LW;
        UINT16 HW;
    } word;
    struct
    {
        UINT8 LB;
        UINT8 HB;
        UINT8 UB;
        UINT8 MB;
    } byte;
    struct
    {
        UINT16_Bits_t low;
        UINT16_Bits_t high;
    }wordUnion;
    struct
    {
        UINT8 b0:1;
        UINT8 b1:1;
        UINT8 b2:1;
        UINT8 b3:1;
        UINT8 b4:1;
        UINT8 b5:1;
        UINT8 b6:1;
        UINT8 b7:1;
        UINT8 b8:1;
        UINT8 b9:1;
        UINT8 b10:1;
        UINT8 b11:1;
        UINT8 b12:1;
        UINT8 b13:1;
        UINT8 b14:1;
        UINT8 b15:1;
        UINT8 b16:1;
        UINT8 b17:1;
        UINT8 b18:1;
        UINT8 b19:1;
        UINT8 b20:1;
        UINT8 b21:1;
        UINT8 b22:1;
        UINT8 b23:1;
        UINT8 b24:1;
        UINT8 b25:1;
        UINT8 b26:1;
        UINT8 b27:1;
        UINT8 b28:1;
        UINT8 b29:1;
        UINT8 b30:1;
        UINT8 b31:1;
    } bits;
} UINT32_Bits_t;

typedef union
{
    UINT64 Val;
    UINT32 d[2];
    UINT16 w[4];
    UINT8 v[8];
    struct
    {
        UINT32 LD;
        UINT32 HD;
    } dword;
    struct
    {
        UINT16 LW;
        UINT16 HW;
        UINT16 UW;
        UINT16 MW;
    } word;
    struct
    {
        UINT8 b0:1;
        UINT8 b1:1;
        UINT8 b2:1;
        UINT8 b3:1;
        UINT8 b4:1;
        UINT8 b5:1;
        UINT8 b6:1;
        UINT8 b7:1;
        UINT8 b8:1;
        UINT8 b9:1;
        UINT8 b10:1;
        UINT8 b11:1;
        UINT8 b12:1;
        UINT8 b13:1;
        UINT8 b14:1;
        UINT8 b15:1;
        UINT8 b16:1;
        UINT8 b17:1;
        UINT8 b18:1;
        UINT8 b19:1;
        UINT8 b20:1;
        UINT8 b21:1;
        UINT8 b22:1;
        UINT8 b23:1;
        UINT8 b24:1;
        UINT8 b25:1;
        UINT8 b26:1;
        UINT8 b27:1;
        UINT8 b28:1;
        UINT8 b29:1;
        UINT8 b30:1;
        UINT8 b31:1;
        UINT8 b32:1;
        UINT8 b33:1;
        UINT8 b34:1;
        UINT8 b35:1;
        UINT8 b36:1;
        UINT8 b37:1;
        UINT8 b38:1;
        UINT8 b39:1;
        UINT8 b40:1;
        UINT8 b41:1;
        UINT8 b42:1;
        UINT8 b43:1;
        UINT8 b44:1;
        UINT8 b45:1;
        UINT8 b46:1;
        UINT8 b47:1;
        UINT8 b48:1;
        UINT8 b49:1;
        UINT8 b50:1;
        UINT8 b51:1;
        UINT8 b52:1;
        UINT8 b53:1;
        UINT8 b54:1;
        UINT8 b55:1;
        UINT8 b56:1;
        UINT8 b57:1;
        UINT8 b58:1;
        UINT8 b59:1;
        UINT8 b60:1;
        UINT8 b61:1;
        UINT8 b62:1;
        UINT8 b63:1;
    } bits;
} UINT64_Bits_t;




#endif  /* GENERIC_TYPE_DEFS_H */
