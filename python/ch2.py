import numpy as np
import pandas as pd
from pandas import Series, DataFrame

def A():
    a = np.array([1, 2, 3])
    b = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
    b[1,1]=10
    print( a.shape )
    print( b.shape )
    print( a.dtype )
    print( b )

def B():
    persontype = np.dtype({
        'names':['name', 'age', 'chinese', 'math', 'english'],
        'formats':['S32','i', 'i', 'i', 'f']})
    peoples = np.array([("ZhangFei",32,75,100, 90),("GuanYu",24,85,96,88.5),
        ("ZhaoYun",28,85,92,96.5),("HuangZhong",29,65,85,100)],
        dtype=persontype)
    ages = peoples[:]['age']
    chineses = peoples[:]['chinese']
    maths = peoples[:]['math']
    englishs = peoples[:]['english']
    print( np.mean(ages) )
    print( np.mean(chineses) )
    print( np.mean(maths) )
    print( np.mean(englishs) )

def C():
    name = raw_input("What's your name?")
    sum = 100+100
    print( ('hello,%s' %name) )
    print( ('sum = %d' %sum) )

    sum = 0
    for number in range(11):
        sum = sum + number
    print( sum )

    a = np.array([[1,2,3], [4,5,6], [7,8,9]])
    print( np.percentile(a, 50) )
    print( np.percentile(a, 50, axis=0) )
    print( np.percentile(a, 50, axis=1) )



def D():
    x1 = Series([1,2,3,4])
    x2 = Series(data=[1,2,3,4], index=['a', 'b', 'c', 'd'])
    print( x1 )
    print( x2 )

def E():
    data = {'Chinese': [66, 95, 93, 90,80],'English': [65, 85, 92, 88, 90],'Math': [30, 98, 96, 77, 90]}
    df1 = DataFrame(data)
    df2 = DataFrame(data, index=['ZhangFei', 'GuanYu', 'ZhaoYun', 'HuangZhong', 'DianWei'], columns=['English', 'Math', 'Chinese'])
    print( df1 ) 
    print( df2 ) 

def F():
    df1 = DataFrame({'name':['ZhangFei', 'GuanYu', 'a', 'b', 'c'], 'data1':range(5)})
    print( df1.describe() )         

if __name__ == "__main__":
    # execute only if run as a script
    F()
