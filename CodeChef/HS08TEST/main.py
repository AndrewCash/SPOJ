#!/bin/env python
import sys


withdrawal = input()
balance = input()

if withdrawal % 5 != 0:
    sys.exit()

if ((balance + 0.5) > withdrawal):
    balance = balance - withdrawal - 0.5
    print balance
