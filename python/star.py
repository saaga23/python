import turtle

turtle.pencolor("red")
turtle.penup()
turtle.setposition(-45,90)
turtle.pendown()
for i in range(0,5):
    turtle.right(145)
    turtle.forward(45)
turtle.hideturtle()
turtle.exitonclick()