#Andrew Cash
#https://www.codechef.com/problems/HS08TEST

from decimal import Decimal, ROUND_HALF_UP

var1, var2 = raw_input().split()
withdrawal, balance = [float(var1), float(var2)]

if withdrawal % 5 != 0:
    print balance

if ((balance + 0.5) > withdrawal):
    balance = balance - withdrawal - 0.5
    our_value = Decimal(balance)
    output = Decimal(our_value.quantize(Decimal('.01'), rounding=ROUND_HALF_UP))
    print output
