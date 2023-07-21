import turtle  # using shorter name for turtle
# Draw a red triangle centered at (-45, 100)
turtle.pencolor('red')  # set pen color
turtle.penup()      #lift pen to move it
turtle.setposition(-45, 100) #Move the pen to coordinates (-45,100)
turtle.pendown() # Place pen to begin drawing
turtle.right(45)
turtle.forward(120)
turtle.left(45)
turtle.backward(160)
turtle.setposition(-45, 100)
turtle.pendown()
turtle.hideturtle()
turtle.exitonclick()