def cube(k):
    return pow(k, 3)

def successor(k):
    return k+1;

def summation(n, term, next):
    total, k = 0, 1
    while k <= n:
        total, k = total + term(k), next(k)
    return total

def sum_cubes(n):
    return summation(n, cube, successor)

print sum_cubes(3)