# Andrew Cash
# COINS python implementation

def exchange(num):
    a = num / 2
    b = num / 3
    c = num / 4
    
    sumofparts = a + b + c

    if (sumofparts > num):
        print (a + b + c)
    else:
        print num

def main():
    num = 0;
    while (num >= 0) and (num <= 1000000000):
        num = input()
        exchange(num)

if __name__ == "__main__":
    main()
