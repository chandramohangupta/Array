import turtle
import random

def draw_branch(t, length, angle, depth):
    if depth == 0 or length < 5:
        # Draw leaves
        t.color(random.choice(['#228B22', '#32CD32', '#006400', '#7CFC00']))
        t.begin_fill()
        t.circle(6)
        t.end_fill()
        t.color('#4a2c0a')
        return

    # Draw branch
    t.color('#4a2c0a')
    t.pensize(max(1, depth * 1.5))
    t.forward(length)

    # Right branch
    t.right(angle)
    draw_branch(t, length * 0.7, angle, depth - 1)

    # Left branch
    t.left(angle * 2)
    draw_branch(t, length * 0.7, angle, depth - 1)

    # Return to original position
    t.right(angle)
    t.backward(length)

def draw_tree():
    screen = turtle.Screen()
    screen.bgcolor('#87CEEB')  # sky blue
    screen.title('🌳 Graphical Tree')
    screen.setup(700, 600)

    t = turtle.Turtle()
    t.speed(0)          # fastest
    t.hideturtle()
    t.left(90)          # point upward
    t.penup()
    t.goto(0, -220)     # start from bottom center
    t.pendown()

    # Draw trunk
    t.color('#4a2c0a')
    t.pensize(12)
    t.forward(100)

    # Draw branches recursively
    draw_branch(t, 100, 25, 6)

    # Draw ground
    t.penup()
    t.goto(-350, -220)
    t.pendown()
    t.color('#228B22')
    t.pensize(8)
    t.goto(350, -220)

    turtle.done()

draw_tree()