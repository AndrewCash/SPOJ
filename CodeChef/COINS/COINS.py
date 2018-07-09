# Andrew Cash
# COINS python implementation

def exchange(num):
    sumOfParts = num/2 + num/3 + num/4

    if (sumofparts > num):
        print sumOfParts
    else:
        print num

def main():
    num = 0;
    while (num >= 0) and (num <= 1000000000):
        num = input()
        exchange(num)

if __name__ == "__main__":
    main()
