"""
This function should take in one integer.

If the integer is negative, print "Negative"
If the integer is zero, print "Zero"
If the integer is positive, print "Positive"
"""
def eval_int(n):
    # TODO: WRITE CODE HERE
  
# DO NOT MODIFY CODE BELOW THIS POINT
def main():
    print("Test 1:")
    print("Expected Output:\nPositive")
    print("Your Output:")
    eval_int(5)
    
    print("Test 2:")
    print("Expected Output:\nZero")
    print("Your Output:")
    eval_int(0)
    
    print("Test 3:")
    print("Expected Output:\nNegative")
    print("Your Output:")
    eval_int(-2)

if __name__=='__main__':
    main()
