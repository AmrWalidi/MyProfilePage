import math
import sympy as smp


def exponent(base, k):
    exp = 1
    for i in range(k):
        exp = base*exp
    return exp


def factorial(k):
    num = k
    factor = 1
    for i in range(k):
        factor *= num
        num -= 1
    return factor


def derivative(y, n):
    if n == 0:
        return f.subs([(x, y)]).evalf()
    else:
        dfdx = smp.diff(f, x, n)
        return dfdx.subs([(x, y)]).evalf()


x = smp.symbols('x', real=True)
f = smp.cos(x)
total = 0

for i in range(1):
    total += (derivative(0, i)*exponent((3.14/5), i))/factorial(i)


truncation_Error = smp.cos(math.pi/5)-total
print("Kesme Hatası = " + str("{:.15f}".format(truncation_Error)))

total = 0
for i in range(3):
    total += (derivative(0, i)*exponent((math.pi/5), i))/factorial(i)


truncation_Error = smp.cos(math.pi/5)-total
print("Kesme Hatası = " + str("{:.15f}".format(truncation_Error)))
