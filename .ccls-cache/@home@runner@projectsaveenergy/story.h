#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <string.h>

#include "class.h"

void clearin(){ cout << "\033[2J\033[1;1H"; }

void dpause(){ //Pause until ENTER is pressed
  int flag;
  cout << endl << "---PRESS [ENTER] TO CONTINUE / HOLD TO SKIP---" << endl;
  flag = getc(stdin);
  clearin();
}

void slow_print(const string& str){//idk
    for (size_t i = 0; i != str.size(); ++i) {
        cout << str[i];
        sleep(100000);
    }
}

void openstory(){
  //string startline1[42]={"W","e","l","c","o","m","e"," ","t","o"," ","o","u","r"," ","w","o","r","l","d","!"," ","W","o","r","l","d"," ","o","f"," ","c","r","i","s","i","s",".",".","."}, 
  //startline2[]={"I","n"," ","A",". ","D",".","2","0","x","x",":","o","u","r"," ","w","o","r","l","d"," ","h","a","v","e"," ","c","r","i","s","i","s"," ","w","i","t","h"," ","e","n","e","r","g","y"};

  cout << " "<<endl;dpause();
  cout << "Welcome to our world, a world in crisis..."<<endl;dpause();
  cout << "            --20XX A.D.-- \nUnregulated usage of energy have lead to a rise in global temperatures,\nresulting in catastrophic disasters all over the globe." << endl;dpause();
  cout << "Irénée, the only one who have the power to change things, \nmust do daily tasks in order to lower the average global temperature." << endl;dpause();
  cout << "Each day, he have a limited amount of energy,\nwhich he requires to complete tasks.\nHis energy will be replinished each day." << endl;dpause();
  cout << "However, if the averge global temperature exceeds 42c, \nhumanity will perish..." << endl;dpause();
  cout << "Within 7 days, he must lower the temperature down to between 13.9 - 19c...\nand each day the temperature must not exceed 42c." << endl;dpause();
  cout << "Every action matters. Make it count." << endl;dpause();
  cout << "You, as the {WHATS THE ROLE??} of Irénée,\nhave a duty to help him do quests. \nHelp him through each day, and save our world..." << endl;dpause();
  
  //clearin();
  
}

void dialog(int a, Character Pname){
  
  cout << Pname.GoName() <<": Hello ~" << endl; dpause();
  cout << "Irénée: Hello !" << endl; dpause();
  cout << Pname.GoName() <<": What you doing ?" << endl; dpause();
  cout << "--- Choice ---" << endl; dpause();
  //cout << "Irénée; do (what the choice is )" << endl;

}


//DRAFTS


//*DAY 1 INTRO
//N:  It's been getting hotter every single day.
//    I don't think we'll last any longer if this keeps up.
//I:  We'll have to manage somehow. I think I got something we can do to help with that.
//N:  Really? What exactly do you have in mind?
//    ---CHOICES---
//N:  Oh! I see!. That seems like a great plan. Let's get started now then.
//I:  Right...

//*DAY 2 INTRO
//N:  Yesterday we did quite a bit, Irenee, what do you have in mind today?
//I:  Hmmm, lemme think for a sec.
//    ---CHOICES---
//N:  That should be managable! We'll begin asap!
//L:  Sure! I'm fired up!

//*DAY 3 INTRO
//I:  Now we're on day 3. The deadline is so close... Can we mangage this?
//N:  Well, to be honest, who knows? We just have to try our best and hope it will pay off.
//I:  Right, then today I think we will...
//    ---CHOICES---
//N:  Nice pick! Let's do this!

//*DAY 4 INTRO
//N:  Hmmm... Our situation is still not very clear...
//I:  What do you mean by that?
//N:  Well, after what we did, I still can't say for sure that we're certain to change things for the better...
//I:  We still gotta keep on doing our best, don't we?
//N:  Absolutely! Any plans for today?
//I:  Ermmm... Maybe we could...
//    ---CHOICES---
//N:  Good idea! Let's go!

//*DAY 5 INTRO
//N:  Hahaha!
//L:  What's so funny? or is there some good news?
//N:  Well, after checking the data from this morning, we definitely still have some chance!
//L:  That's great! Then let's improve it further by starting work right away!
//N:  Yup!
//    ---CHOICES---


//QUEST/DAY END TEXTS??
//*QUESTS FINISHED_1
//I:  Phew! Finally! I need to take a long nap after this!
//N:  Sure, have a rest. Tomorrow will probably be as tiring...
//I:  I hope not...
//*QUESTS FINISHED_2
//I:  Wow, we did a lot today! I hope all this will do good for our situation.
//N:  Indeed! We just have to do a bit more and everything will be better!
//*QUESTS FINISHED_3
//I:  Now I just wanna lie down and do nothing...  
//N:  Well, me too. But tomorrow we gotta keep up our work!
//I:  Sure :>
//*QUESTS FINISHED_4
//I:  Well, now we're done! Let's have a dinner!
//N:  Yup, sure!
//*QUESTS FINISHED_5
//I:  Just a few more days... I wonder if what we did will help us.
//N:  It surely will, just hang on a bit more.



//*GOOD END
//N:  Irenee, I think we did it... The temperature seems to be in a perfectly livable conditions!
//I:  REALLY!!?? Our work paid off! If we keep this up, our world might still have a chance!
//N:  Yes, if we keep this up, everything will definitely be better!
//After all their efforts, the world is safe again.
//If everyone would consider their environmental impact, and just put some effort in doing good things for the environments, the world will become a much better place!
//GOOD END REACHED! THANKS FOR PLAYING!


//*BAD END
//N:  Irenee, I've got some bad news to tell you...
//I:  ...
//N:  We did what we could, but after all, it's not enough.
//I:  How much time do we have left?
//N:  I'm not too certain on that. But probably no longer than a few days...
//I:  If only we tried harder...
//In the end, all their efforts went to waste...
//The global temperature went through the roof, causing cities to be flooded, ecosystems destroyed, millions of lives lost...
//and all this could've been avoided... If we tried harder...
//BAD END REACHED...