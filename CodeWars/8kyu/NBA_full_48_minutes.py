#Python 2.7.6

def nba_extrap(ppg, mpg):
    #Check whether he played or not. i.e.Zero division error check
    if mpg == 0:
        return 0

    #Find the result
    value = (ppg*48)/float(mpg)

    #return back rounded result
    return round(value,1)
