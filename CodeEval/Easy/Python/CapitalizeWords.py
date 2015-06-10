import string
import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    print " ".join(w.capitalize() for w in test.split())


test_cases.close()
