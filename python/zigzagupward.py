#import turtle
import turtle
turtle.pencolor("blue")
turtle.penup()
turtle.setposition(-45,90)
turtle.pendown()
for i in range(0,10):
    turtle.right(130)
    turtle.forward(50)
    turtle.left(130)
    turtle.forward(50)
turtle.hideturtle()
turtle.exitonclick()