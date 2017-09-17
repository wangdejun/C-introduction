from operator import getitem


def mul_rat(x, y):
    return make_rat(numer(x) * numer(y), denom(x) * denom(y))

def eq_rat(x, y):
    return numer(x) * denom(y) == numer(y) * denom(x)

def make_rat(n, d):
    return (n, d)
def numer(x):
    return getitem(x, 0)
def denom(x):
    return getitem(x, 1)

def str_rat(x):
    """Return a string 'n/d' for numerator n and denominator d."""
    return '{0}/{1}'.format(numer(x), denom(x))

half = make_rat(1, 2)
print str_rat(half)

third = make_rat(1, 3)
print str_rat(mul_rat(half, third))

print u"Is this equal?"
print eq_rat(mul_rat(half, third),mul_rat(half, third))