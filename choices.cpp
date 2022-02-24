#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
#include <windows.h>
#define width 165

using namespace std;

void errorfunc();
void loadingscreen();
void typewriter(string a);

class dragonfly
{   
    int a,b,c,d,starter=0;
    void intro_line()
    {   
        system("CLS");

        typewriter("As you open the door thousands of dragonflies lift you up and carry you to a small children's park.");
        typewriter("\nYou look around to see many children playing around you.");
        typewriter("\nYou look down at your legs and weirdly feel way too small.");
        typewriter("\nYou restlessly go to the pond where you see that you are now your 6 year old self!");
        typewriter("\nCompletely confused by what is happening, you start to tear up and then you find a hand on your shoulder.");
        typewriter("\nIt's a little girl who holds your hand, wipes your tears, gives you the brightest smil");
        typewriter("\nand takes you to the swings where you both play");

        starter=1;
        cout<<"\n\n~Press any key to continue~";
        getch();
        system("CLS");
    }
    public:
    int intro_little_girl(int x)
        {    
            system("CLS");
            if(starter==0){intro_line();}
            
            typewriter("The two of you play around running on the sandy ground, swinging and laughing as you see how far up you are in the sky.You race to the merry go round. ");
            typewriter("\nTired of all the running and playing you both lay down on the grass and look at the sky above, spotting weird faces the clouds make at you. ");
            typewriter("\nWhile you are busy laughing, a little dragonfly suddenly appears out of nowhere and the girl, enticed by the dragonfly gets up and starts chasing the dragonfly. ");
            typewriter("\nA while later, you decide to go after her. ");
            typewriter("\nYou run and run but don't seem to find her. You don't give up. ");
            typewriter("\nYou finally see her on a bridge but to your utter surprise you see her playing with another boy. ");
            typewriter("\nYour eyes swell up with tears and as you turn away you see a beam of blue sparkly light in front of you.");

            cout<<"\n\n1. You can go back to your friend.";
            if(x==0){cout<<"\n2. You can see where the sparkles take you.";}
            cout<<"\n\nChoice : ";
            cin>>a;
            if(a==1)
                return other_guy(0);
            if(a==2&&x==0)
                return 111;
            else 
                errorfunc();
            return 0; 
        }
    int other_guy(int x)
        {    
            system("CLS");
            if(starter==0){intro_line();}

            typewriter("You choose to go back to the little girl.");
            typewriter("\nYou go to the bridge, grab her hand and tell her that you want to play with her on the big slides");
            typewriter("\nShe bids goodbye to the other boy and excited about playing on the slides, follows you back to the playground.");
            typewriter("\nAs the two of you goofily play on the slides, the little girl whispers in your ear, that she wants to take you to a special place.");
            typewriter("\nThe two of you get off the slide and start walking.");
            typewriter("\nYou ask her repeatedly “Where are we going?” but the only answer you'd get is *Shush just come with me* followed by a giggle");
            typewriter("\nYou finally reach the place. It's a small cave behind the bushes. She tells you that this is her hiding place");
            typewriter("\nYou are scared to go inside the dark cave");
            typewriter("\nYou suddenly hear a creaking sound coming from behind you");

            cout<<"\n\n1. You can Enter the cave.";
            if(x==0){cout<<"\n2. You can turn around, what you will see is a door. Do you wish to see where it takes you?";}
            cout<<"\n\nChoice : ";
            cin>>b;
            if(b==1)
                return hiding_place(0);
            if(b==2&&x==0)
                return 112; 
            else 
                errorfunc();
            return 0;
        }
    int hiding_place(int x)
        {                
            system("CLS");
            if(starter==0){intro_line();}
            
            typewriter("You both crawl inside the dark cave.");
            typewriter("\nShe takes out a torch and sheds light on a blue box.");
            typewriter("\nShe asks you to open it and when you do, you see a box filled with her toys and drawings.");
            typewriter("\nShe tells you that these are all the things that are special to her!");
            typewriter("\nShe shows you all the things one by one and you sit there smiling looking at the pretty girl and her blue box of wonders.\n");
            typewriter("\nSuddenly you hear sounds of children shouting in excitement.");
            typewriter("\nYou ask her if she wants to see what is going on outside?");
            typewriter("\nShe says yes and the two of you run back to the park where you see other children playing.");
            typewriter("\nYou both start playing different games with them.");
            typewriter("\nThe little girl goes with a group of girls to build a sand castle and you go on the monkey bar.");
            typewriter("\nWhile you are swinging on the monkey bar you suddenly slip and fall down.");
            typewriter("\nSeeing this the other kids start laughing and when you look towards the left you see that the little girl laughing too.");
            typewriter("\nSeeing her laugh at you breaks your heart. When you turn your face away from her you see a bright white light that almost looks like a tunnel");

            cout<<"\n\n1. You can continue your journey with the little girl.";
            if(x==0){cout<<"\n2. You can see where this bright light leads to.";}
            cout<<"\n\nChoice : ";
            cin>>c;
            if(c==1)
                return bitching(0);
            if(c==2&&x==0)
                return 113;
            else 
                errorfunc();
            return 0;
        }
    int bitching(int x)
        {              
            system("CLS");
            if(starter==0){intro_line();}
            
            typewriter("Embarrassed, you start crying. After a while you see a hand on your shoulder.");
            typewriter("\nIt's the little girl who helps you get up, apologizes for laughing at you and dusts off the dirt on your shirt.");
            typewriter("\nYour tears disappear and you smile at her. The two of you decide to go back and play on the swing again.\n");
            typewriter("\nThe two of you laugh as you run all around chasing dragonflies, you race to reach the seesaw, you play hide and seek and swing on the red swings.");
            typewriter("\nAs the little girl swings high in the air you decide to go get her a flower.");
            typewriter("\nOn your way back, you see her fallen on the ground.");
            typewriter("\nAs you run towards her, you see a thousands of dragonflies buzzing near by");

            cout<<"\n\n1. You can continue your journey with the little girl";
            if(x==0){cout<<"\n2. You can see where the dragonflies want to take you.";}
            cout<<"\n\nChoice : ";
            cin>>d;
            if(d==1)
                return girl_falls();
            if(d==2&&x==0)
                return 114;
            else 
                errorfunc();
            return 0;
        }
    int girl_falls()
        {   
            system("CLS");

            typewriter("You choose to go back to your friend.");
            typewriter("\nThis time you help her up, wipe her tears and give her a little yellow sunflower as a gift...");
            typewriter("\nSeeing the flower her face lights up like a star and the two of you live happily playing in the little playground for a long long time.");

            getch();
            return 115;   }
}df;

class paintbrush
{
    int a,b,c,d,starter2=0;
    void intro_line()
    {
        system("CLS");
        
        typewriter("You have entered in a new world where all you find is beautiful meadows, pink skies and fluttering butterflies.");
        typewriter("\nThe clouds seem dreamy and wispy. The air feels pleasent and fresh.");
        typewriter("\nThere is a comfortable quiteness all around.");

        starter2=1;
        cout<<"\n\n~Press any key to continue~";
        getch();
        system("CLS");
    }
    public:
    int intro_other_girl(int x)
        {              
            system("CLS");
            if(starter2==0){intro_line();}
            
            typewriter("You walk through the grassland only to see yellow objects floating far away. ");
            typewriter("\nYou run in the same direction to find out what these bright yellow objects are! ");
            typewriter("\nAs you reach closer, you see that these objects are mere candles sparkling in hues of orange and yellow. The candles leave you in wonder and surprise. ");
            typewriter("\nAs the yellow dots melt in thin air you wonder what this magical place might be. ");
            typewriter("\nYou walk towards a field of tulips and as you look at the blooming flowers, your attention is diverted by a magnificent butterfly.");

            cout<<"\n\n1. You can continue walking further in the field.";
            if(x==0){cout<<"\n2. You can chase the butterfly to see where it wants you to go.";}
            cout<<"\n\nChoice : ";
            cin>>a;
            if(a==1)
                return story2(0);
            if(a==2&&x==0)
                return 1111;
            else 
                errorfunc(); 
            return 0; 
        }
    int story2(int x)
        {               
            system("CLS");
            if(starter2==0){intro_line();}
            
            typewriter("You run barefoot on the moist grass and look at the beautiful red dots protruding all around you. ");
            typewriter("\nYou suddenly hear water flowing somewhere far away. ");
            typewriter("\nYou follow the sound and end up at a huge waterfall. ");
            typewriter("\nThe water is transparent and the pebbles can be seen shining underneath. ");
            typewriter("\nYou see a diamond stuck between some rocks inside the body of water.");
            typewriter("\nAs you go closer, you see a signboard stuck on a boulder that says, *There is more depth to me than what you perceive*.");
            typewriter("\nWhen you look down, you see colorful feathers making a trail.");

            cout<<"\n\n1. You can jump into the water.";
            if(x==0){cout<<"\n2. You can follow the trail.";}
            cout<<"\n\nChoice : ";
            cin>>b;
            if(b==1)
                return story3(0);
            if(b==2&&x==0)
                return 1112;
            else 
                errorfunc();
            return 0;
        }
    int story3(int x)
        {                
            system("CLS");
            if(starter2==0){intro_line();}
            
            typewriter("You jump into the water but as you touch the diamond, small jellyfishes come to you and take you deep inside the water that seems to have no end. ");
            typewriter("\nYou go deeper and deeper to find a mine full of diamonds. ");
            typewriter("\nYou are speechless at what you see. You grab a handful of the diamonds and swim back to the surface. ");
            typewriter("\nAs you come out of the water onto the land, You see a small cottage. ");
            typewriter("\nYou walk to the cottage. As you reach the entrance you call out to see if someone is around.");
            typewriter("\nNo one seems to be there. You knock on the door but no one answers. ");
            typewriter("\nYou open the door and enter the cottage. You are surprised at what you see in front of you.");
            typewriter("\nInside you see a world full of mysterious creatures, colorful trees trapped inside a glass wall. ");
            typewriter("\nYou then see a feather drop at your feet.");
            typewriter("\nTowards the right, you see little ladybugs following a bright rainbow out of the window.");

            cout<<"\n\n1. You can pick up the feather and see what might happen.";
            if(x==0){cout<<"\n2. You can escape the cottage through the window.";}
            cout<<"\n\nChoice : ";
            cin>>c;
            if(c==1)
                return story4(0);
            if(c==2&&x==0)
                return 1113;
            else 
                errorfunc();
            return 0;
        }
    int story4(int x)
        {               
            system("CLS");
            if(starter2==0){intro_line();}
            
            typewriter("The glass wall disappears into thin air. You step into this mesmerizing world. ");
            typewriter("\nAround you are magnanimous trees colored in hues of orange red and pink. The sweet smell of the flowers has enveloped the surroundings.");
            typewriter("\nYou walk steadily, trying to absorb the beauty of this mysterious place. Suddenly you hear a melody. You begin to follow it.");
            typewriter("\nThe melody takes you to a white sea. The twinkling stars above have made the sea appear white.");
            typewriter("\nAll of a sudden you see a bale of tiny turtles come running on the shore.");
            typewriter("\nYou feel something crawling on your leg.");
            typewriter("\nScared, you look down. To your surprise, its a baby turtle climbing up your leg!");
            typewriter("\nYou pick it up.");
            typewriter("\nWhen you bring it closer, you see the same star shaped symbol on its shell!");
            typewriter("\nSuddenly akk the stars from above start coming closer, forming a little tunnel!");

            cout<<"\n\n1. You can stay where you are.";
            if(x==0){cout<<"\n2. You can see where these stars take you.";}
            cout<<"\n\nChoice : ";
            cin>>d;
            if(d==1)
                return story_ending();
            if(d==2&&x==0)
                return 1114;
            else 
                errorfunc();
            return 0;
        }
    int story_ending()
        {    
            system("CLS");
            
            typewriter("You sit down at the beach looking at how the waves stride to the shore and swiftly go back.");
            typewriter("\nThere is an air of calmness and comfort that surrounds you. ");
            typewriter("\nYou lay down on the soft sand and look at the sky above which is filled with floating stripes of green and blue.");
            typewriter("\nSoon you fall asleep. ");
            typewriter("\nWhen you wake up the next morning, you realize that this was all just a dream!");

            getch();
            return 1115;   }
}pb;

class adventure
{   int a,b,c;
    public:
    int adcheckpoint1()
    {    
        system("CLS");
        
        typewriter("You find yourself back at the rickety shop. You leave the shop all confused and start walking again to complete your trek. ");
        typewriter("\nAs you take every step, you see the mighty mountains coming closer and closer to you. ");

        cout<<"\n\n~Press any key to continue~";
        getch();
        return adcheckpoint2(0,0);   
    }
    int adcheckpoint2(int x, int y)
    {           
        system("CLS");
        
        typewriter("You pace through the harsh terrain . ");
        typewriter("\nAround you are tall trees, little ferns and eagles circling up in the sky. ");
        typewriter("\nYou walk and walk and soon find yourself at an ice fall. When you look down all you can see is darkness. ");
        typewriter("\nTo go further you ought to cross that ice fall. You shiver in fear.");
        typewriter("\nYou see a little two little igloos towards your left");

        cout<<"\n\n1. You can cross the ice fall and continue your expedition.";
        if(y==0){cout<<"\n2. You can enter the igloo with a star carved on it.";}
        if(x==0){cout<<"\n3. You can enter the igloo with a dragonfly carved on it.";}
        cout<<"\n\nChoice : ";
        cin>>a;
        if(a==1)
            return adcheckpoint3(0,0);
        if(a==2&&y==0)
            return 21;
        if(a==3&&x==0)
            return 11;
        else 
            errorfunc();
        return 0;   
    }
    int adcheckpoint3(int x, int y)
    {   
        system("CLS");

        typewriter("You have made the choice to take the leap of faith.");
        typewriter("\nYou take a deep breath and jump to the other side. ");
        typewriter("\nYou overcame your fear and found yourself closer to your destination. ");
        typewriter("\nYou continue your journey. As you walk further, you find yourself in a breathtaking scenery. ");
        typewriter("\nYou are surrounded by snowclad mountains, white sheets of glistening snow and icicle covered trees all around. ");
        typewriter("\nYou go further almost breathless and hungry but completely mind boggled with your surroundings. ");
        typewriter("\nYou choose to sit down on a log and build a fire for yourself. ");
        typewriter("\nThe warmth of the fire makes you giddy. You take out your saucepan and start cooking up some soup for yourself. ");
        typewriter("\nAs you sit there, with soup in your hand, you find a group of climbers coming your way. You wave to them and ask them to give you company. ");
        typewriter("\nThey come and sit by the fire. Before you know it, its starting to get dark. ");
        typewriter("\nAll the climbers sing in joy and share with each other stories that mean the most to them. Hearing the stories of other climbers makes you nostalgic. ");
        typewriter("\nYou get up and climb on top of a rock and look at the dark sky above you. ");
        typewriter("\nYou see a little firefly up in the sky. You chase it and soon find yourself in the middle of the woods. ");
        typewriter("\nIn front of you are hues of yellow sparkling far away.");
        typewriter("\nTowards your right and left are two paths. Both seem to go nowhere.");

        cout<<"\n\n1. You can chase the yellow lights.";
        if(y==0){cout<<"\n2. You can explore where the Star path goes.";}
        if(x==0){cout<<"\n3. You can explore where the Dragonfly path goes.";}
        cout<<"\n\nChoice : ";
        cin>>b;
        if(b==1)
            return last_steps(0,0);
        if(b==2&&y==0)
            return 22;
        if(b==3&&x==0)
            return 12; 
        else 
            errorfunc();  
        return 0;
    }
    int last_steps(int x, int y)
    {   
        system("CLS");
        
        typewriter("You continue your journey deeper into the woods and finally reach a place which is filled with fireflies.");
        typewriter("\nAll you can see are tiny dots of yellow fluttering in the sky and you stand there in complete awe and surprise.");
        typewriter("\nFilled with joy you return back to you route. ");
        typewriter("\nYou walk further up the trek. ");
        typewriter("\nThe mountains are a mysterious place filled with exceptional beauty and breathtaking experiences. ");
        typewriter("\nAs you reach a cliff you look around and see how far up you have reached and rejoice in your achievement. ");
        typewriter("\nYou again start walking but suddenly a rustling voice startles you. ");
        typewriter("\nWhen you follow the voice you find a reindeer hiding behind the bushes. ");
        typewriter("\nYou are mesmerized by this marvelous creature. Seeing you it starts running away. You follow it as its beauty has completely encapsulated you. ");
        typewriter("\nYou run and run and find yourself on the other side of the cliff . ");
        typewriter("\nBehind you are the beautiful woods and in front of you is the alluring morning sun beaming on the");
        typewriter("\nsnow clad mountains that stand tall. You stand on a sheet of land covered with glistening snow. ");
        typewriter("\nYou then spot the deer on a land that splits into two paths.");

        cout<<"\n\n1. You can stay where you are.";
        if(y==0){cout<<"\n2. You can explore the star path.";}
        if(x==0){cout<<"\n2. You can explore the path where the dragonflies are.";}
        cout<<"\n\nChoice : ";
        cin>>c;
        if(c==1)
            {   
                system("CLS");

                typewriter("\nThe mountains, The beaming sun and the sparkling snow are a mesmerzing place to be at.");
                typewriter("\nYou realize that this is the place that gives you the most peace. ");
                typewriter("\nThe air has a calming touch to it. The surreal beauty of your surrounding leave you spellbound.");
                typewriter("\nYou feel that this is the place where you belong to the most.");
                typewriter("\nYou decide to leave your current mundane life and shift to these magical mountains.");
                typewriter("\nMonths later you build a small cottage on the very spot and live happily with your two dogs and endless dreams.");
                
                getch(); 
                return 14;
            }
        if(c==2&&y==0)
            return 23;
        if(c==3&&x==0)
            return 13;
        else 
            errorfunc();
        return 0;
    }
}adv;

int main()
{
    system("CLS");
    //loadingscreen();
    int a,b=1,check;
     
    typewriter("You are on an expedition to the mountains. Filled with zeal, you have begun your journey."); 
    typewriter("\nA journey filled with adventures and surprises every step of the way.");
    typewriter("\nAs you reach your first basecamp you find a rickety old shop with an icy roof and brown panes.");
    typewriter("\nYou enter the shop that has a plethora of random goods.");
    typewriter("\nAs you glance around the dusty shelves, an old man emerges from a sly corner."); 
    typewriter("\nHe looks at you and smiles as he hands to you a book. You look at him, astonished.");  
    typewriter("\nYou ask him why he gave you the book and in reply he says, *This is what you have been looking for*");
    typewriter("\nYou stand there in utter confusion, completely unaware of why you have been given the book."); 
    typewriter("\nYou look at its cover that says: *Am I your destiny?*");
    typewriter("\nCurious about the book, you open it.");
    typewriter("\nAs soon as you open it, you are taken to a woody cottage covered with glittery peaks of snow protruding from the roof."); 
    typewriter("\nAs you stand at the staircase, you see two doors with different symbols on it. The first one has a dragonfly on it while the second has a star on it."); 
    typewriter("\nWhat lies in front of you is the same book."); 
    typewriter("\nYou open the book in the hope to go back to where you came from but to your surprise,");
    typewriter("\nthis time the book has nothing written on it except for one line that says:"); 
    typewriter("\n*Every decision you make takes you to a world that is distinctly different than the other.*");
    typewriter("\n\nOpen any one of the doors to write your own destiny!");
    cout<<"\n\nWhich door do you choose?\n1. The door with a dragonfly on it.\n2. The door with a star on it.\n";
    cout<<"\nChoice : ";
    cin>>a;
    check= (a==2)?pb.intro_other_girl(0):df.intro_little_girl(0);

    while(b)
    {
        switch(check)
        {
            case 111: check=adv.adcheckpoint1();
                        break;
            case 112: check=adv.adcheckpoint2(1,0);
                        break;
            case 113: check=adv.adcheckpoint3(1,0);
                        break;
            case 114: check=adv.last_steps(1,0);
                        break;
            case 115: b=0;
                        break;
            case 1111: check=adv.adcheckpoint1();
                        break;
            case 1112: check=adv.adcheckpoint2(0,1);
                        break;
            case 1113: check=adv.adcheckpoint3(0,1);
                        break;
            case 1114: check=adv.last_steps(0,1);
                        break;
            case 1115: b=0;
                        break;
            case 11: check=df.other_guy(1);
                        break;
            case 12: check=df.hiding_place(1);
                        break;
            case 13: check=df.bitching(1);
                        break;
            case 14: b=0;
                        break;
            case 21: check=pb.story2(1);
                        break;
            case 22: check=pb.story3(1);
                        break;
            case 23: check=pb.story4(1);
                        break;
            case 24: b=0;
                        break;
            default: errorfunc();
        }
    }

    system("CLS");
    cout<<"Thank You!";

getch();
return 0;
}

void errorfunc()
{
    system("CLS");
    cout<<"!!!ERROR!!!\nPlease enter a vaild choice.\nPress any key to continue : ";
    getch();
    main();
}
void loadingscreen()
{
    cout<<endl;
    cout<< "Loading..."<<endl;
    Sleep(100);
    for(int i=0;i<width;i++)
    {   printf("%c",219);
        Sleep(55);  }
}
void typewriter(string a)
{   
    int x=0;
    while(a[x]!='\0')
    {   cout << a[x];
	Sleep(1);x++;    }
}