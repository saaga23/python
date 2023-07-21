import turtle

turtle.pencolor("red")
turtle.penup()
turtle.setposition(-45,90)
turtle.pendown()
for i in range(0,4):
    turtle.right(90)
    turtle.forward(45)
turtle.hideturtle()
turtle.exitonclick()