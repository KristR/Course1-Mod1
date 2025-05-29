/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Processes and displays statistics on an array of numbers.
 *
 * Given an array of unsigned 8-bit integers, this program calculates the
 * median, mean, maximum and minimum value of the array before sorting the
 * array into a descending order and displaying the results in the terminal.
 *
 * This file contains the definition and use of the following functions:
 * - print_statistics()
 * - print_array()
 * - find_median()
 * - find_mean()
 * - find_maximum()
 * - find_minimum()
 * - sort_array()
 *
 * @author Kristaps Ruments
 * @date 27/05/2025
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */



}

/* Add other Implementation File Code Here */

void print_statistics(uchar *pdata, uchar len)
{
  // Implementation goes here
}

void print_array(uchar *pdata, uchar len)
{
  // Implementation goes here
}

uchar find_median(uchar *pdata, uchar len)
{
  // Implementation goes here
}

uchar find_mean(uchar *pdata, uchar len)
{
  // Implementation goes here
}

uchar find_maximum(uchar *pdata, uchar len)
{
  // Implementation goes here
}

uchar find_minimum(uchar *pdata, uchar len)
{
  // Implementation goes here
}

void sort_array(uchar *pdata, uchar len)
{
  // Implemetation goes here
}

