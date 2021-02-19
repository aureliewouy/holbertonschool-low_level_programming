#!/usr/bin/python3
"""
Function  that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    perimeter = 0
    for row in range(len(grid)):
        check = perimeter
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if col == 0:
                    perimeter += 1
                else:
                    if grid[row][col - 1] == 0:
                        perimeter += 1
                if col == len(grid[0]) - 1:
                    perimeter += 1
                else:
                    if grid[row][col + 1] == 0:
                        perimeter += 1
                if row == 0:
                    perimeter += 1
                else:
                    if grid[row - 1][col] == 0:
                        perimeter += 1
                if row == len(grid) - 1:
                    perimeter += 1
                else:
                    if grid[row + 1][col] == 0:
                        perimeter += 1
        if perimeter != 0 and check == perimeter:
            return perimeter
    return perimeter
