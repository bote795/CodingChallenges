import sys
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    string_array =test.split(';')
    set1 =set([])
    set2 = set([])
    for elem in string_array[0].split(','):
        set1.add(elem)
    for elem in string_array[1].split(','):
        set2.add(elem)
    intersection =set1 & set2
    intersection = sorted(intersection)
    output=""
    for num in intersection:
        if intersection[len(intersection)-1] == num:
            output+= num
        else:
            output += num +","
    if len(intersection) == 0:
        output="\n"
    print output
test_cases.close()