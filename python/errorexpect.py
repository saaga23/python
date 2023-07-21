import turtle
import random

# Draws a regular polygon with the given number of sides.
# The length of each side is length
# the pen begins at point(x,y)
# The color of the polygon is color (defaults to black)
# the polygon is rendered solid if fill is true (default to False)
def polygon(sides, length, x, y, color="black", fill=False):
    turtle.penup()
    turtle.setposition(x,y)
    turtle.pendown()
    turtle.color(color)
    if fill:
        turtle.begin_fill()
    for i in range(sides):
        turtle.forward(length)
        turtle.left(360//sides)
    if fill:
        turtle.end_fill()
# Disable rendering to speed up drawing
turtle.hideturtle()
turtle.tracer(0)

# Draw afew polygons
polygon(3, 30, 10, 10)      # Back triangle outline
polygon(4, 30, 50, 50, "blue")
polygon(5,30, 100, 100, "red", True)  # red solid pentagon

turtle.update()  # Render image
turtle.exitonclick()  # Wait for user's mouse click