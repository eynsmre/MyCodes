def find_index(to_search, target):
    for i, value in enumerate(to_search):
        if value == target:
            return i
    return -1

my_list = ['apple', 'banana', 'grape', 'pear']
index = find_index(my_list, 'grape')
print('Found at index: ', index)
