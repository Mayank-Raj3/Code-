import turtle
import time
import random
delay=0.09
score=0
high_score=0
life=1
#making screen
wn=turtle.Screen()
wn.title('Snake Game')
wn.bgcolor('black')
wn.setup(width=600,height=600)
wn.tracer(0)
#snake head
head=turtle.Turtle()
head.speed(0)
head.shape('square')
head.color('green')
head.penup()
head.goto(0,0)
head.direction='stop'
#Snake Body
segment=[]
#snake food
food=turtle.Turtle()
food.speed(0)
food.shape('circle')
food.color('red')
food.penup()
food.goto(0,100)
#Pen
pen=turtle.Turtle()
pen.speed(0)
pen.shape('square')
pen.color('yellow')
pen.penup()
pen.hideturtle()
pen.goto(0,275)
pen.write("Score: 0  High Score: 0  Life:3",align='center',font=('Courier',11,'normal'))
#Function
def go_up():
    if head.direction!='down':
        head.direction='up'
def go_down():
    if head.direction!='up':
        head.direction='down'
def go_left():
    if head.direction!='right':
        head.direction='left'
def go_right():
    if head.direction!='left':
        head.direction='right'  
def move():
    if head.direction=='up':
        y=head.ycor()
        head.sety(y+20)
    if head.direction=='down':
        y=head.ycor()
        head.sety(y-20)
    if head.direction=='left':
        x=head.xcor()
        head.setx(x-20)
    if head.direction=='right':
        x=head.xcor()
        head.setx(x+20)
#keyboard binding
wn.listen()
turtle.onkeypress(go_up,'Up')
turtle.onkeypress(go_down,'Down')
turtle.onkeypress(go_left,'Left')
turtle.onkeypress(go_right,'Right')
#main game loop
while True:
    wn.update()
    #checking for border collision
    if head.xcor()>290 or head.xcor()<-290 or head.ycor()>290 or head.ycor()<-290:
        time.sleep(1)
        head.goto(0,0)
        head.direction='stop'
        #hiding segments
        for s in segment:
            s.goto(1000,1000)
        #clearing segments
        segment.clear()
        #Reseting the score
        score=0
        life-=1
        pen.clear()
        pen.write("Score:{}  High Score:{}  Life:{}".format(score,high_score,life),align='center',font=('Courier',11,'normal'))
        #Reset delay
        delay=0.1
    #Checking for food collision
    if head.distance(food)<20:
        mof_x=random.randint(-288,288)
        mof_y=random.randint(-288,288)
        food.goto(mof_x,mof_y)
        #adding body
        new_segment=turtle.Turtle()
        new_segment.speed(0)
        new_segment.shape('square')
        new_segment.color('green')
        new_segment.penup()
        segment.append(new_segment)
        #Shortening the delay
        delay-=0.001
        #Increasing the score
        score+=10
        if score>high_score:
            high_score=score
        pen.clear()
        pen.write("Score:{}  High Score:{}  Life:{}".format(score,high_score,life),align='center',font=('Courier',11,'normal'))
    #move the end segment
    for i in range(len(segment)-1,0,-1):
        x=segment[i-1].xcor()
        y=segment[i-1].ycor()
        segment[i].goto(x,y)
    #segment 0 movement 
    if len(segment)>0:
        x=head.xcor()
        y=head.ycor()
        segment[0].goto(x,y)

    move()
    #check for head and body collision
    for s in segment:
        if s.distance(head)<20:
            time.sleep(1)
            head.goto(0,0)
            head.direction='stop'
            #hiding segments
            for s in segment:
                s.goto(1000,1000)
            #clearing segments
            segment.clear()
            #reseting the score
            score=0
            life-=1
            #updating the score
            pen.clear()
            pen.write("Score:{}  High Score:{}  Life:{}".format(score,high_score),align='center',font=('Courier',11,'normal'))
            #Reset delay
            delay=0.1

    if life==0:
        pen.color('blue')
        pen.goto(0,0)
        pen.write("You Lose!! Try Again!!",align='center',font=('Courier',24,'normal'))
        time.sleep(1.5)
        break
    
    time.sleep(delay)
