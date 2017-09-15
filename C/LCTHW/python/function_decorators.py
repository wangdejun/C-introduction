def trace1(fn):
    def wrappered(x):
        print('->', fn, '(', x, ')')
        return fn(x)
    return wrappered

@trace1
def tripple(x):
    return 3 * x

tripple(12)