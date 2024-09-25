#include <stdio.h>
#include "draw.h"


/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

/* Prints a arrow composed of a triangel of specified height ,whose left edge is at col leftCol,
   and a size x size square, whose left col is at startCol*/
void print_arrow(int leftCol, int size)
{
  print_triangle(leftCol, size);
  int Square_Left_Col = leftCol + (size*2+1)/3;
  int Square_Size = (size*2+1)/3;
  print_square(Square_Left_Col, Square_Size);
}
