def fib(val):
    if val == 1 or val == 0:
        return 1
    return fib(val - 1) + fib(val - 2)

print(fib(44))