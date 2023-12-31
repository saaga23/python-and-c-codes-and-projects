# List the factors of the integers 1..MAX
MAX = 20                        # MAX is 20
n = 1 # start with 1
while n <= MAX:        #Do not go past MAX
    factor = 1         # 1 is a factor of any integer
    print(end=str(n) + ':')  # Which integer are we examing?
    while factor <= n:      #Factors are <= the number
        if n % factor == 0:  # Test to see if factor is a factor of n
            print(factor, end='') #If so display it
            factor += 1           # try the next number
    print() # Move to next line for next n.
    n += 1