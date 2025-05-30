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
#include <stdbool.h>
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

  uchar median = find_median(test, SIZE);
  uchar mean = find_mean(test, SIZE);
  uchar min = find_minimum(test, SIZE);
  uchar max = find_maximum(test, SIZE);

  print_statistics(median, mean, min, max);

  printf("\n==== Unsorted dataset ====\n");
  print_array(test, SIZE);

  sort_array(test, SIZE);
  
  printf("\n==== Sorted dataset ====\n");
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(uchar med, uchar mean, uchar min, uchar max)
{
  // Implementation goes here

  printf("\n==== Dataset statistics ====\n"
         "Median: %d\nMean: %d\nMinimum: %d\nMaximum: %d\n", med, mean, min, max);

}

void print_array(uchar *pdata, uchar len)
{
  // Implementation goes here

  
  for(uchar i = 0; i < len; i++)
  {
    if( (i == 0) ||
        (i % 4 == 0) )
    {
      printf("%d) %d", i+1, *(pdata+i));
    }
    else
    {
      printf("\t\t%d) %d", i+1, *(pdata+i));
    }

    if((i + 1) % 4 == 0)
    {
      printf("\n");
    }
  }

  printf("\n");
}

uchar find_median(uchar *pdata, uchar len)
{
  // Implementation goes here

  uchar medianArray[len];

  for(uchar i = 0; i < len; i++)
  {
    medianArray[i] = *(pdata+i);
  }

  sort_array(medianArray, len);

  char middle;

  if(len % 2 == 0)
  {
    middle = len / 2;
  }
  else
  {
    middle = (len + 1) / 2;
  }

  return medianArray[middle];
}

uchar find_mean(uchar *pdata, uchar len)
{
  // Implementation goes here
  uchar result;

  for(uchar i = 0; i < len; i++)
  {
    result += *(pdata+i);
  }

  return result / len;
}

uchar find_maximum(uchar *pdata, uchar len)
{
  // Implementation goes here
  uchar result = 0;

  for(uchar i = 0; i < len; i++)
  {
    if(*(pdata+i) > result)
    {
      result = *(pdata+i);
    }
  }

  return result;
}

uchar find_minimum(uchar *pdata, uchar len)
{
  // Implementation goes here
  uchar result = *pdata; // Take the first array element for comparison

  for(uchar i = 0; i < len; i++)
  {
    if(*(pdata+i) < result)
    {
      result = *(pdata+i);
    }
  }

  return result;
}

void sort_array(uchar *pdata, uchar len)
{
  // Implemetation goes here

  uchar buffer;
  bool swapFlag = true;

  while(swapFlag == true)
  {
    swapFlag = false;
    for(uchar i = 0; i < len - 1; i++) // 'len' in the conditional expression is offset by 1 so that we do not index outside of the array.
    {
      uchar *pCurrent = pdata + i;
      uchar *pNext = pdata + i + 1;

      if(*pCurrent > *pNext)
      {
        swapFlag = true;
        buffer = *pCurrent;
        *pCurrent = *pNext;
        *pNext = buffer;
      }
    }
  }

}
