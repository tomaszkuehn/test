/**
 * @file trace.h
 * @author Tomasz Kuehn
 * @brief Trace module function prototypes and macros
 * @version 0.1
 * @date 2020
 * 
 * @copyright TK (c) 2020
 * 
 */

#ifndef TRACE_H
#define TRACE_H

#include <stdio.h>
#include <sys/time.h>
#include <time.h>


//#define NODEBUG

/**
 * @brief TRACE - macro to display trace message
 * 
 */
#if defined NODEBUG
    #define TRACE( format, ... )
#else
    #define TRACE( format, ... )   {struct timeval tv; \
                                    gettimeofday(&tv, NULL); \
                                    int usec = tv.tv_usec; \
                                    printf( "%s::%06d %s %s(%d) TRACE " format "\n\r", __TIME__, usec, __FILE__, __FUNCTION__,  __LINE__, ##__VA_ARGS__ );}

#endif



#endif
