#Digit to word.py
value=int(input('please enter an integer value range in 0...5:'))
if value < 0:
    print('value is too small')
else:
        if value == 1:
            print('one')
        else:
            if value == 2:
                print('two')
            else:
                if value == 3:
                    print('three')
                else:
                    if value == 4:
                        print('four')
                    else:
                        if value == 5:
                            print('five')
                        else:
                            print('too large')