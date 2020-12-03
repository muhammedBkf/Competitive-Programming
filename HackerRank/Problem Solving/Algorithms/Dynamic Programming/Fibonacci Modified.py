
# i implemented this solution in python because in c++ i have to implement a big int class (and i'm lazy :v)
def fibonacciModified(t1, t2, n):
    t=0
    n=n-2
    for i in range(n):
        t=t2*t2+t1
        t1=t2
        t2=t
    return t
