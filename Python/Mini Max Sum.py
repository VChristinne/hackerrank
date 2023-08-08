import math
import os
import random
import re
import sys


def miniMaxSum(arr):
    minimo = min(arr)
    maximo = max(arr)
    print(sum(arr) - maximo, sum(arr) - minimo)


if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))
    miniMaxSum(arr)
