def fib(n):
    """Compute the nth Fibonacci number, for n >= 2."""
    pred, curr = 0, 1   # Fibonacci numbers
    k = 2               # Position of curr in the sequence
    while k < n:
        pred, curr = curr, pred + curr  # Re-bind pred and curr
        k = k + 1                       # Re-bind k
    return curr

print fib(8)
