#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    squared = []
    for line in matrix:
        squared.append([c**2 for c in line])
    return squared

after creating each files, cat 0-main.py and copy the code they gave as an example by using vi 0-mmain

then chmod u+x
