#Andrew Cash
#https://www.codechef.com/problems/HS08TEST

var1, var2 = raw_input().split()
withdrawal, balance = [float(var1), float(var2)]

if withdrawal % 5 != 0:
    exit (0)

if ((balance + 0.5) > withdrawal):
    balance = balance - withdrawal - 0.5
    print balance
