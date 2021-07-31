# -*- coding: utf-8 -*-  

import numpy as np
import pandas as pd
from pandas import Series, DataFrame
from pandasql import sqldf, load_meat, load_births



def A():
    df1 = DataFrame({'name':['ZhangFei', 'GuanYu', 'a', 'b', 'c'], 'data1':range(5)})
    pysqldf = lambda sql: sqldf(sql, globals())
    sql = "select * from df1 where name ='ZhangFei'"
    print pysqldf(sql)


if __name__ == "__main__":
    # execute only if run as a script
    A()
