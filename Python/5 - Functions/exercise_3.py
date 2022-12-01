"""
Task:
    Write a function to invert a number and
    return it. It MUST preserve the sign if
    it is negative (see examples)
    
    FUNCTION NAME: invert_int
    
    PARAMETER: 1 int (name of your choice)
    
    RETURN: int
    
    EXAMPLES:
        INPUT:  123
        OUTPUT: 321
        
        INPUT:  10
        OUTPUT: 1 (01)
        
        INPUT:  -42
        OUTPUT: -24 (negative sign is preserved)
        
"""

# TODO: WRITE FUNCTION HERE

# DO NOT MODIFY CODE BELOW THIS POINT
def main():
    i1 = invert_int(123)
    assert i1 == 321
    
    i2 = invert_int(4)
    assert i2 == 4
    
    i3 = invert_int(-20)
    assert i3 == -2
    
    i4 = invert_int(-258)
    assert i4 == -852
    
    print("Passed all test cases!")

if __name__=='__main__':
    main()
