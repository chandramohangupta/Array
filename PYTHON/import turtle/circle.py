from turtle import  *
from colorsys import *
speed(0)
bgcolor("black")
h=1
for i in range(5000):
    color("pink")
    h+=10.00
    left(1)
    forward(1)
    for j in range(2):
        left(2)
        circle(100)
        hideturtle
done()        
