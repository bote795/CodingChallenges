import sys
test_cases = open(sys.argv[1], 'r')
output=""
for test in test_cases:
    i=1
    for char in test:
        if char.isalpha():
            if i%2 == 0:
                output+=char.lower()
            else:
                output+=char.upper()
            i+=1
        else:
            output+=char
print output
test_cases.close()
