"""
TASK:
    Create a function that takes in someone's
    name and return it backwards.
    
    FUNCTION NAME: backward_name
    
    INPUT: 1 string (name of your choice)
    
    RETURN: the name backwards
"""

# TODO: WRITE FUNCTION HERE

# DO NOT MODIFY CODE BELOW THIS POINT
def main():
    s1 = backward_name("mike")
    assert s1 == "ekim"
    
    s2 = backward_name("george washington")
    assert s2 == "notgnihsaw egroeg"
    
    s3 = backward_name("")
    assert s3 == ""
    
    print("Passed all test cases!")
    
if __name__=='__main__':
    main()
