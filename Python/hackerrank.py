def reverse_words_order_and_swap_cases(sentence):
    # Write your code here
    for letter in sentence:
        if(letter.isupper()):
            sentence.replace(letter,letter.lower())
        elif(letter.islower()):
            sentence.replace(letter,letter.upper())
        
    return sentence

print(reverse_words_order_and_swap_cases("kaLeM"))