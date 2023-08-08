import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input().strip())
    var = 1 <= n <= 100

    if n % 2 or n in range(6, 21):
        print("Weird")
    elif n in range(2, 5) or n >= 20:
        print("Not Weird")
