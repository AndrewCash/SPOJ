#Andrew Cash
#https://www.codechef.com/problems/HS08TEST

var1, var2 = raw_input().split()
withdrawal, balance = [int(var1), float(var2)]

if (withdrawal % 5 == 0) and (withdrawal + 0.5 < balance):
	balance -= withdrawal + 0.5
	print("%.2f" % balance)

else:
	print("%.2f" % balance)

