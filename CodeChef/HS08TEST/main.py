#Andrew Cash
#https://www.codechef.com/problems/HS08TEST

withdrawal = input()
balance = input()

if withdrawal % 5 != 0:
    exit (0)

if ((balance + 0.5) > withdrawal):
    balance = balance - withdrawal - 0.5
    print balance
