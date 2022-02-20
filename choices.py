import sys
import os
from tqdm import *
from time import sleep

#INTRODUCTION 
def introduction():
    os.system('cls')
    s1='''\n\nYou are on an expedition to the mountains. Filled with zeal, you have begun your journey. 
A journey filled with adventures and surprises every step of the way. As you reach your first basecamp you find a rickety old shop with an icy roof and brown panes.
You enter the shop that has a plethora of random goods. As you glance around the dusty shelves, an old man emerges from a sly corner. 
He looks at you and smiles as he hands to you a book. You look at him, astonished.  
You ask him why he gave you the book and in reply he says, “This is what you have been looking for”
You stand there in utter confusion, completely unaware of why you have been given the book. 
You look at its cover that says: “Am I your destiny?”
Curious about the book, you open it.
As soon as you open it, you are taken to a woody cottage covered with glittery peaks of snow protruding from the roof. 
As you stand at the staircase, you see two doors with different symbols on it. The first one has a dragonfly on it while the second has a star on it. 
What lies in front of you is the same book. 
You open the book in the hope to go back to where you came from but to your surprise, this time the book has nothing written on it except for one line that says: 
"Every decision you make takes you to a world that is distinctly different than the other. 
Open any one of the doors to write your own destiny!"\n
'''
    for char in s1:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    
    decision1=input("Which door do you choose?\n1. The door with a dragonfly on it.\n\n2. The door with a star on it.\n")
    
    if decision1.strip()=='1':
        story1_intro()   
    elif decision1.strip()=='2':
        story2_intro()
    else:
        print("Invalid choice")


global start1,start2,a,b,c,d
start1=0
start2=0

#FIRST STORY BEGINS

def story1_introduction():     #STORY 1 INTRODUCTION
    os.system('cls')
    
    s14='''As you open the door thousands of dragonflies lift you up and carry you to a small children’s park. 
You look around to see many children playing around you. 
You look down at your legs and weirdly feel way too small.You restlessly go to the pond where you see that you are now your 6 year old self! 
Completely confused by what is happening, you start to tear up and then you find a hand on your shoulder. 
It’s a little girl who holds your hand, wipes your tears, gives you the brightest smile and takes you to the swings where you both play.'''
    for char in s14:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    sleep(2)    
    global start1
    start1=1
    
    

def story1_intro(x1=0):      #CHOICE 1
    
    if start1==0:
        story1_introduction()
        
    os.system('cls')
    s2='''The two of you play around running on the sandy ground, swinging and laughing as you see how far up you are in the sky. You race to the merry go round. 
Tired of all the running and playing you both lay down on the grass and look at the sky above, spotting weird faces the clouds make at you. 
While you are busy laughing, a little dragonfly suddenly appears out of nowhere and the girl, enticed by the dragonfly gets up and starts chasing the dragonfly. 
A while later, you decide to go after her. 
You run and run but don’t seem to find her. You don’t give up. 
You finally see her on a bridge but to your utter surprise you see her playing with another boy. 
Your eyes swell up with tears and as you turn away you see a beam of blue sparkly light in front of you.\n
'''
    for char in s2:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    print('1. You can go back to your friend.\n')
    
    
    if x1==0:
        print("2. You can see where the sparkles take you.\n")        
    a=input()
    if a.strip()=='1':
        os.system('cls')
        story1_1(0)
    elif a.strip()=='2'and x1==0:
        os.system('cls')
        story3_intro()
       
    else:
        print("Invalid choice")
    

def story1_1(x2=0):         #CHOICE 2
    if start1==0:
        story1_introduction()
    s3='''\nYou choose to go back to the little girl. 
You go to the bridge, grab her hand and tell her that you want to play with her on the big slides.
She bids goodbye to the other boy and excited about playing on the slides, follows you back to the playground. 
As the two of you goofily play on the slides, the little girl whispers in your ear, that she wants to take you to a special place. 
The two of you get off the slide and start walking. 
You ask her repeatedly “Where are we going?” but the only answer you’d get is “Shush just come with me” followed by a giggle.
You finally reach the place. It’s a small cave behind the bushes. She tells you that this is her hiding place!
You are scared to go inside the dark cave.
You suddenly hear a creaking sound coming from behind you.\n'''
    
    for char in s3:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    print("1. You can Enter the cave.\n")
    if x2==0:
        print("2. You can turn around, what you will see is a door. Do you wish to see where it takes you?\n")        
 
    b=input()
    if b.strip()=='1':
        os.system('cls')
        story1_2(0)
    elif b.strip()=='2':
        os.system('cls')
        a1='''You are now at an ice fall.You glance around and all you see is a snowy terrain.
The only way to go further is by crossing the ice fall'''
        for char in a1:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story3_1(1,0)
    else:
        print("Invalid choice")


def story1_2(x3=0):        #CHOICE 3
    if start1==0:
        story1_introduction()
    s4='''\nYou both crawl inside the dark cave. 
She takes out a torch and sheds light on a blue box. 
She asks you to open it and when you do, you see a box filled with her toys and drawings. 
She tells you that these are all the things that are special to her! 
She shows you all the things one by one and you sit there smiling looking at the pretty girl and her blue box of wonders.

Suddenly you hear sounds of children shouting in excitement. 
You ask her if she wants to see what is going on outside? 
She says yes and the two of you run back to the park where you see other children playing. 
You both start playing different games with them. 
The little girl goes with a group of girls to build a sand castle and you go on the monkey bar. 
While you are swinging on the monkey bar you suddenly slip and fall down. 
Seeing this the other kids start laughing and when you look towards the left you see that the little girl laughing too. 
Seeing her laugh at you breaks your heart. When you turn your face away from her you see a bright white light that almost looks like a tunnel.\n
'''
    for char in s4:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    print("1. You can continue your journey with the little girl.\n")
    if x3==0:
        print("2. You can see where this bright light leads to.\n")  

    c=input()
    if c.strip()=='1':
        os.system('cls')
        story1_3(0)
    elif c.strip()=='2':
        os.system('cls')
        a2='''You have been brought to the icy mountains and in front of you in a dark forest.
You suddenly spot a cluster of yellow lights flickering far away inside the forest'''
        for char in a2:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story3_2(1,0)
    else:
        print("Invalid choice")


def story1_3(x4=0):          #CHOICE 4
    if start1==0:
        story1_introduction()
    s5='''\nEmbarrassed, you start crying. After a while you see a hand on your shoulder. 
It’s the little girl who helps you get up, apologizes for laughing at you and dusts off the dirt on your shirt. 
Your tears disappear and you smile at her. The two of you decide to go back and play on the swing again. 

The two of you laugh as you run all around chasing dragonflies, you race to reach the seesaw, you play hide and seek and swing on the red swings. 
As the little girl swings high in the air you decide to go get her a flower. 
On your way back, you see her fallen on the ground. 
As you run towards her, you see a thousands of dragonflies buzzing near by.\n'''

    for char in s5:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    
    print("1. You can continue your journey with the little girl?\n")
    if x4==0:
        print("2. You can see where the dragonflies want to take you.\n")  
    d=input()
    if d.strip()=='1':
        os.system('cls')
        story1_end(0)
    elif d.strip()=='2' and x4==0:
        os.system('cls')
        a3='''You are at a cliff and all you see are tall mountains in front of you. You stand on endless sheets of white snow.'''
        for char in a3:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story3_3(1,0)
    else:
        print("Invalid choice")

def story1_end(x5=0):        #FIRST STORY ENDS
    s16='''\nYou choose to go back to your friend.
This time you help her up, wipe her tears and give her a little yellow sunflower as a gift. 
Seeing the flower her face lights up like a star and the two of you live happily playing in the little playground for a long long time.\n\nTHE END\n\n'''
    for char in s16:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)


#SECOND STORY BEGINS
def story2_introduction():          #STORY 2 INTRODUCTION
    os.system('cls')
    s15='''You have entered in a new world where all you find is beautiful meadows, pink skies and fluttering butterflies. 
The clouds seem dreamy and wispy. The air feels pleasent and fresh.
There is a comfortable quiteness all around.\n '''
    for char in s15:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    sleep(2)    
    global start2
    start2=1

def story2_intro(y1=0):         #CHOICE 1
    if start2==0:
        story2_introduction()
    os.system('cls')
    s6='''You walk through the grassland only to see yellow objects floating far away. 
You run in the same direction to find out what these bright yellow objects are! 
As you reach closer, you see that these objects are mere candles sparkling in hues of orange and yellow. The candles leave you in wonder and surprise. 
As the yellow dots melt in thin air you wonder what this magical place might be. 
You walk towards a field of tulips and as you look at the blooming flowers, your attention is diverted by a magnificent butterfly.\n'''

    for char in s6:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)

    print("1. You can continue walking further in the field.\n")
    if y1==0:
        print("2. You can chase the butterfly to see where it wants you to go.\n")  

    a=input()
    if a.strip()=='1':
        os.system('cls')
        story2_1(0)
    elif a.strip()=='2' and y1==0:
        os.system('cls')
        story3_intro()
    else:
        print("Invalid choice")


def story2_1(y2=0):         #CHOICE 2
    if start2==0:
        story2_introduction()
    s7='''\nYou run barefoot on the moist grass and look at the beautiful red dots protruding all around you. 
You suddenly hear water flowing somewhere far away. 
You follow the sound and end up at a huge waterfall. 
The water is transparent and the pebbles can be seen shining underneath. 
You see a diamond stuck between some rocks inside the body of water.
As you go closer, you see a signboard stuck on a boulder that says, “There is more depth to me than what you perceive”.
When you look down, you see colorful feathers making a trail.\n'''

    for char in s7:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    print("1. You can jump into the water.\n")
    if y2==0:
        print("2. You can follow the trail.\n")  
    b=input()
    if b.strip()=='1':
        os.system('cls')
        story2_2()
    elif b.strip()=='2' and y2==0:
        os.system('cls')
        b1='''You are now at an ice fall.You glance around and all you see is a snowy terrain.
The only way to go further is by crossing the ice fall'''
        for char in b1:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story3_1(0,1)
    else:
        print("Invalid choice")


def story2_2(y3=0):         #CHOICE 3
    if start2==0:
        story2_introduction()
    s8='''\nYou jump into the water but as you touch the diamond, small jellyfishes come to you and take you deep inside the water that seems to have no end. 
You go deeper and deeper to find a mine full of diamonds. 
You are speechless at what you see. You grab a handful of the diamonds and swim back to the surface. 
As you come out of the water onto the land, You see a small cottage. 
You walk to the cottage. As you reach the entrance you call out to see if someone is around.
No one seems to be there. You knock on the door but no one answers. 
You open the door and enter the cottage. You are surprised at what you see in front of you.
Inside you see a world full of mysterious creatures, colorful trees trapped inside a glass wall. 
You then see a feather drop at your feet.
Towards the right, you see little ladybugs following a bright rainbow out of the window.\n'''

    for char in s8:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)

    print("1. You can pick up the feather and see what might happen.\n")
    if y3==0:
        print("2. You can escape the cottage through the window.\n")


    c=input()
    if c.strip()=='1':
        os.system('cls')
        story2_3(0)
    elif c.strip()=='2'and y3==0:
        os.system('cls')
        b2='''You have been brought to the icy mountains and in front of you in a dark forest.
You suddenly spot a cluster of yellow lights flickering far away inside the forest'''
        for char in b2:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story3_2(0,1)
    else:
        print("Invalid choice")


def story2_3(y4=0):         #CHOICE 4
    if start2==0:
        story2_introduction()
    s9='''\nThe glass wall disappears into thin air. You step into this mesmerizing world. 
Around you are magnanimous trees colored in hues of orange red and pink. The sweet smell of the flowers has enveloped the surroundings.
You walk steadily, trying to absorb the beauty of this mysterious place. Suddenly you hear a melody. You begin to follow it.
The melody takes you to a white sea. The twinkling stars above have made the sea appear white.
All of a sudden you see a bale of tiny turtles come running on the shore.
You feel something crawling on your leg.
Scared, you look down. To your surprise, its a baby turtle climbing up your leg!
You pick it up.
When you bring it closer, you see the same star shaped symbol on its shell!
Suddenly akk the stars from above start coming closer, forming a little tunnel!\n'''

    for char in s9:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)

    print("1. You can stay where you are.\n")
    if y4==0:
        print("2. You can see where these stars take you.\n")  
    d=input()
    if d.strip()=='1':
        os.system('cls')
        story2_end(0)
    elif d.strip()=='2' and y4==0:
        os.system('cls')
        b3='''You are at a cliff and all you see are tall mountains in front of you. You stand on endless sheets of white snow.'''
        for char in b3:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story3_3(0,1)
    else:
        print("Invalid choice")

def story2_end(x5=0):          #SECOND STORY ENDS
    s15=''''You sit down at the beach looking at how the waves stride to the shore and swiftly go back.
There is an air of calmness and comfort that surrounds you. 
You lay down on the soft sand and look at the sky above which is filled with floating stripes of green and blue.
Soon you fall asleep. 
When you wake up the next morning, you realize that this was all just a dream!\n\nTHE END\n\n
'''
    for char in s15:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)



#THIRD STORY BEGINS
def story3_intro(z1=0,z2=0):        #CHOICE 1
    
    s10='''\nYou find yourself back at the rickety shop. You leave the shop all confused and start walking again to complete your trek. 
As you take every step, you see the mighty mountains coming closer and closer to you. 
You pace through the harsh terrain . 
Around you are tall trees, little ferns and eagles circling up in the sky. 
You walk and walk and soon find yourself at an ice fall. When you look down all you can see is darkness. 
To go further you ought to cross that ice fall. You shiver in fear.
You see a little two little igloos towards your left\n'''
    
    for char in s10:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)
    print('1. You can cross the ice fall and continue your expedition.\n')
    
    if z1==0:
        print("2. You can enter the first igloo.\n")     
    if z2==0:
        print("3. You can enter the second igloo.\n")   
    a=input()
    
    if a.strip()=='1':
        os.system('cls')
        story3_1(0,0)
    elif a.strip()=='2' and z1==0:
        os.system('cls')
        c1='''You have landed onto a grassland. 
As you glance around you see the little girl playing on the bridge with a boy. 
You realize that you are a kid again!'''
        for char in c1:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story1_1(1)
    elif a.strip()=='3' and z2==0:
        os.system('cls')
        c2='You have landed onto a field of tulips. The sky is pink and everything seems almost magical.'
        for char in c2:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story2_1(1)
    else:
        print("Invalid choice")


def story3_1(z3=0,z4=0):        #CHOICE 2
    
    s11='''\nYou have made the choice to take the leap of faith.
You take a deep breath and jump to the other side. 
You overcame your fear and found yourself closer to your destination. 
You continue your journey. As you walk further, you find yourself in a breathtaking scenery. 
You are surrounded by snowclad mountains, white sheets of glistening snow and icicle covered trees all around. 
You go further almost breathless and hungry but completely mind boggled with your surroundings. 
You choose to sit down on a log and build a fire for yourself. 
The warmth of the fire makes you giddy. You take out your saucepan and start cooking up some soup for yourself. 
As you sit there, with soup in your hand, you find a group of climbers coming your way. You wave to them and ask them to give you company. 
They come and sit by the fire. Before you know it, its starting to get dark. 
All the climbers sing in joy and share with each other stories that mean the most to them. Hearing the stories of other climbers makes you nostalgic. 
You get up and climb on top of a rock and look at the dark sky above you. 
You see a little firefly up in the sky. You chase it and soon find yourself in the middle of the woods. 
In front of you are hues of yellow sparkling far away.
Towards your right and left are two paths. Both seem to go nowhere.\n'''

    for char in s11:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)

    print('1. You can chase the yellow lights.\n')
    
    if z3==0:
        print("2. You can explore where the 1st path goes.\n")     
    if z4==0:
        print("3. You can explore where the 2nd path goes.\n")   

    b=input()
    if b.strip()=='1':
        os.system('cls')
        story3_2(0,0)
    elif b.strip()=='2' and z3==0:
        os.system('cls')
        c3="The path you chose takes you to a cave covered by bushes and with you is the little girl asking you to enter the cave with her"
        for char in c3:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story1_2(1)
    elif b.strip()=='3' and z4==0:
        os.system('cls')
        c4='''You are brought to a huge waterfall with water as clear as a mirror.The pebbles can be seen shining underneath. 
You see a diamond stuck between some rocks inside the body of water.
As you go closer, you see a signboard stuck on a boulder that says, “There is more depth to me than what you perceive”.'''
        for char in c4:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story2_2(1)
    else:
        print("Invalid choice")


def story3_2(z5=0,z6=0):        #CHOICE 3
   
    s12='''\nYou continue your journey deeper into the woods and finally reach a place which is filled with fireflies. All you can see are tiny dots of yellow fluttering in the sky and you stand there in complete awe and surprise. Filled with joy you return back to you route. 
You walk further up the trek. 
The mountains are a mysterious place filled with exceptional beauty and breathtaking experiences. 
As you reach a cliff you look around and see how far up you have reached and rejoice in your achievement. 
You again start walking but suddenly a rustling voice startles you. 
When you follow the voice you find a reindeer hiding behind the bushes. 
You are mesmerized by this marvelous creature. Seeing you it starts running away. You follow it as its beauty has completely encapsulated you. 
You run and run and find yourself on the other side of the cliff . 
Behind you are the beautiful woods and in front of you is the alluring morning sun beaming on the snow clad mountains that stand tall. You stand on a sheet of land covered with glistening snow. 
You then spot the deer on a land that splits into two paths.\n
'''

    for char in s12:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)

    print('1. You can stay where you are.\n')
    
    if z5==0:
        print("2. You can explore the 1st path.\n")     
    if z6==0:
        print("3. You can explore the 2nd path.\n") 

    c=input()
    if c.strip()=='1':
        os.system('cls')
        story3_3(0,0)
    elif c.strip()=='2' and z5==0:
        os.system('cls')
        c5='''There are a number of swings in front of you. You see a monkey bar in the far corner. 
You join a few other children who are playing on the same swing.
While you are swinging on the monkey bar, you suddendly fall down on the ground with a thump. '''
        for char in c5:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story1_3(1)
    elif c.strip()=='3' and z6==0:
        os.system('cls')
        c6='''You are now in a cottage and in front of you is a glass wall. Inside you see a world full of mysterious creatures and colorful trees.
You fiddle around the cottage to find a way to go explore the world behind this wall.
You see a small star shaped keychain below a rug. As soon as you pick it up something magical happens!'''
        for char in c6:
            sys.stdout.write(char)
            sys.stdout.flush()
            sleep(.05)
        story2_3(1)
    else:
        print("Invalid choice")


def story3_3(z7=0,z8=0):        #END OF THIRD STORY

    s13='''\nThe mountains, The beaming sun and the sparkling snow are a mesmerzing place to be at.
You realize that this is the place that gives you the most peace. 
The air has a calming touch to it. The surreal beauty of your surrounding leave you spellbound.
You feel that this is the place where you belong to the most.
You decide to leave your current mundane life and shift to these magical mountains.
Months later you build a small cottage on the very spot and live happily with your two dogs and endless dreams.\n\nTHE END\n\n'''

    for char in s13:
        sys.stdout.write(char)
        sys.stdout.flush()
        sleep(.05)




#BEGINING
os.system('cls')
for i in tqdm(range(0,100),desc="LOADING",unit="words"):
    sleep(.02)
os.system('cls')

print("                                                                                                          ")
print("           _ _ _ _   __       __     _ _ _ _       _ _ _ _ _ _    _ _ _ _   _ _ _ _ _ _  _ _ _ _ _ _      ")
print("          /       / / /|     / /|   /       /\    /          /   /      /  /          / /          /      ")
print("          $$ $$ $$  $$ |     $$ |   $$ $$ $$  \   $$ $$ $$ $$    $$ $$ $$  $$ $$ $$ $$  $$ $$ $$ $$       ")
print("        $$  |       $$ |_ _ _$$ | $$        $$/|      $$ |     $$  |       $$  |_ _     $$  |_ _ _        ")
print("        $$  |       $$ /     $$ | $$        $$ |      $$ |     $$  |       $$ /    /    $$ /      /       ")
print("        $$  |       $$ $$ $$ $$ | $$        $$ |      $$ |     $$  |       $$ $$ $$     $$ $$ $$ $$       ")
print("        $$  |_ _ _  $$ |     $$ | $$        $$ |      $$ |_ _  $$  |_ _ _  $$  |_ _ _    _ _ _ _ $$       ")
print("        $$ /      / $$ |     $$ | $$        $$/       $$ /  /  $$ /     /  $$ /      /  /        $$       ")
print("          $$ $$ $$  $$/      $$/    $$ $$ $$      $$ $$ $$ $$   $$ $$ $$   $$ $$ $$ $$  $$ $$ $$ $$       ")


s14="\n\nWelcome to CHOICES. Are you ready to explore where your destiny takes you?\n"
for char in s14:
    sys.stdout.write(char)
    sys.stdout.flush()
    sleep(.05)

choice=input("Type Yes if you want to start the adventure.\nType No to exit\n")
if choice.strip()=="No" or choice.strip()=="no" or choice.strip()=="NO":
    print("See you soon")
elif choice.strip()=="Yes" or choice.strip()=="yes" or choice.strip()=="YES":
    introduction()
else:
    print("Invalid choice")
