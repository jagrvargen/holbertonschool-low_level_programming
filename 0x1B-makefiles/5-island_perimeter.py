#!/usr/bin/python3
"""
   This module contains a function definition for an algorithm which determines
   the perimeter of an islanf set on a 2D grid. The island is contiguous and
   consists of 1s surround by water consisting of 0s.
"""


def island_perimeter(grid):
    """This function determines the perimeter of an island on a 2D grid."""
    perim = 0
    total_block = 0
    if grid:
        histo = [0 for i in range(len(grid[0]))]
        for y in grid:
            for x in range(len(y)):
                if y[x] == 1:
                    perim += 4
                    total_block += 1
                    if histo[x] == 1:
                        perim -= 2
                    histo[x] = 1
                else:
                    histo[x] = 0
            if total_block > 0:
                perim -= (total_block - 1) * 2
            total_block = 0
    return perim
