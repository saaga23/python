#import turtle
import turtle
turtle.pencolor("green")
turtle.penup()
turtle.setposition(-45, 90)
turtle.pendown()
for i in range(0,6):
    turtle.right(180)
    turtle.forward(50)
    turtle.right(90)
    turtle.forward(50)
    turtle.left(180)
    turtle.forward(50)
    turtle.right(90)
    turtle.forward(50)
turtle.hideturtle()
turtle.exitonclick()