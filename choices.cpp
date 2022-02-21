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
        typewriter("the intro about the whole path");
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
            typewriter("intro paintbrush");
            cout<<"\n1- Go to story 2 : ";
            if(x==0){cout<<"\n2- run away : ";}
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
            typewriter("story 2");
            cout<<"\n1- Go to story 3 : ";
            if(x==0){cout<<"\n2- run away : ";}
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
            typewriter("story 3");
            cout<<"\n1- Go to story 4 : ";
            if(x==0){cout<<"\n2- run away : ";}
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
            typewriter("story 4");
            cout<<"\n1- Go to story ending : ";
            if(x==0){cout<<"\n2- run away : ";}
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
            typewriter("ending paintbrush");
            getch();
            return 1115;   }
}pb;

class adventure
{   int a,b,c;
    public:
    int adcheckpoint1()
    {    
        system("CLS");
        typewriter("adventure continues.....");
        getch();
        return adcheckpoint2(0,0);   
    }
    int adcheckpoint2(int x, int y)
    {           
        system("CLS");
        typewriter("adv 2");
        cout<<"\n1- continue adventure : ";
        if(y==0){cout<<"\n2- paintbrush : ";}
        if(x==0){cout<<"\n3- dragonfly : ";}
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
        typewriter("adv 3");
        cout<<"\n1- continue adventure : ";
        if(y==0){cout<<"\n2- paintbrush : ";}
        if(x==0){cout<<"\n3- dragonfly : ";}
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
        typewriter("something before the end");
        cout<<"\n1- go to the ending : ";
        if(y==0){cout<<"\n2- paintbrush : ";}
        if(x==0){cout<<"\n3- dragonfly : ";}
        cin>>c;
        if(c==1)
           {   typewriter("The guy is at the top of the mountain with his doggos");
           getch(); return 14;}
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