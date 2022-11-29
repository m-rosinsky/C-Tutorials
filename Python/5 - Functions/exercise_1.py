"""
In this file, your job is to create a function with
the following specifications:

NAME: count_vowels

PARAMETERS: 1 string (name of your choice)

OUTPUT: The number of vowels in the string (not counting y)

EXAMPLE:
    INPUT -> "apple"
    OUTPUT -> 2   (a, e)
    
    INPUT -> "orange"
    OUTPUT -> 3
"""

# TODO: WRITE THE FUNCTION HERE

# DO NOT MODIFY CODE BELOW THIS POINT
def main():
    r1 = count_vowels("mississippi")
    assert r1 == 4
    
    r2 = count_vowels("united states of america")
    assert r2 == 10
    
    r3 = count_vowels("dry")
    assert r3 == 0
    
    print("Passed all cases!")
  
if __name__=='__main__':
    main()
