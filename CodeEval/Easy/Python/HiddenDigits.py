import sys
test_cases = open(sys.argv[1], 'r')
i=0
dict={	
        'a': '0',
		'b': '1',
		'c': '2',
		'd': '3',
		'e': '4',
		'f': '5',
		'g': '6',
		'h': '7',
		'i': '8',
		'j': '9' 
		}
for test in test_cases:
    i+=1
    output=""
    for char in test:
        if dict.has_key(char):
            output+=str(dict[char])
        elif char.isdigit():
            output+=str(char)
    if output == "":
        print "NONE"
    else:
        print output
test_cases.close()
