"""
This function should loop through a string
and print only the consonants (including y).

Example:
input   -> "apple"
output  -> "ppl"

input   -> "bendy"
output  -> "bndy"

input   -> "aeiou"
output  -> ""
"""
def print_consonants(s):
    # TODO: WRITE CODE HERE
  
# DO NOT MODIFY CODE BELOW THIS POINT
def main():
    print("Test 1:")
    print("Expected Output:\nppl")
    print("Your Output:")
    print_consonants("apple")
    
    print("\nTest 2:")
    print("Expected Output:\nth qck brwn fx jmps vr th lzy dg")
    print("Your Output:")
    print_consonants("the quick brown fox jumps over the lazy dog")
    
    print("\nTest 3:")
    print("Expected Output:\n")
    print("Your Output:")
    print_consonants("aueiaoiuaeioue")
  
if __name__=='__main__':
    main()
