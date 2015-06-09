import sys
from sets import Set
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
   uniqueSet=Set([])
   for elem in test.split(','):
       uniqueSet.add(int(elem.strip()));
   output=""
   uniqueSet=sorted(uniqueSet)
   for num in uniqueSet:
      if uniqueSet[len(uniqueSet)-1] == num:
        output+= str(num)
      else:
        output += str(num) +","
   print output
test_cases.close()
