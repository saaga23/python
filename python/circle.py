import turtle
turtle.pencolor("grey")
turtle.penup()
turtle.setposition(-45,90)
turtle.pendown()
for i in range(1,361):
    turtle.right(1)
    turtle.forward(1)
turtle.hideturtle()
turtle.exitonclick()