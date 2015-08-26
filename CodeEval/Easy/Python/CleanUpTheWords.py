import sys
import re
test_cases = open(sys.argv[1], 'r')
for testString in test_cases:
    p = re.compile('([A-Za-z]+)')
    strings = p.findall(testString)
    print ' '.join(str(e).lower() for e in strings)
test_cases.close()
