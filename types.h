//
//  types.h
//  OpenVM
//
//  Created by wwhai on 2020/11/25.
//

#ifndef types_h
#define types_h

#include <stdio.h>
#include "log.h"
// Object size
#define object_size(O, T) sizeof(O) / sizeof(T)
#define type_size(O) sizeof(O)
// New
#define new_object(T) (T *)malloc(sizeof(T))
// byte
typedef unsigned char byte;
// uint32
typedef unsigned int uint32;
// uint16
typedef unsigned short uint16;
// Bytecode info
typedef struct __attribute__((__packed__))
{
    // "VMCC"
    byte type[4];
    // 0.0.1
    byte v_main, v_progress, v_bugfix;
    // 0000H
    uint32 start_address;
} ovmbc;
void ovmbc_output(ovmbc *bc);
#endif
