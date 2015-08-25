import sys
def recurences(testString,arrow):
    ArrowCount=0
    start=0
    start = testString.find(arrow)
    while start != -1:
        ArrowCount += 1
        start = testString.find(arrow, start+ len(arrow) -1)
    return ArrowCount
test_cases = open(sys.argv[1], 'r')
for testString in test_cases:
    LArrow="<--<<"
    RArrow=">>-->"
    ArrowCount=0
    ArrowCount+=recurences(testString,LArrow)
    ArrowCount+=recurences(testString,RArrow)
    print str(ArrowCount)
test_cases.close()
