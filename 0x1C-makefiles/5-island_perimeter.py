#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    r = len(grid)
    c = len(grid[0])
    permm = 0

    for i in range(r):
        for j in range(c):
            if grid[i][j] == 0: continue
            permm += 4
            if i > 0 and grid[i-1][j] == 1:
                permm = permm - 1
            if j > 0 and grid[i][j-1] == 1:
                permm = permm - 1
            if i < r - 1 and grid[i+1][j] == 1:
                permm = permm - 1
            if j < c - 1 and grid[i][j+1] == 1:
                permm = permm - 1
    return permm
