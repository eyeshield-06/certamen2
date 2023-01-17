source('fun.R')
dyn.load('mean_c.so')

a = rnorm(100, mean = 5)

media(a)
