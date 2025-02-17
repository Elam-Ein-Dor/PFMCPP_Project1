#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: policeCar
//  action 1: the policeCar locks its doors
policeCar.lockDoors();
//  action 2: the policeCar increases speed
policeCar.increaseSpeed();
//  action 3: the policeCar turns on sirens
policeCar.turnSirenOn();

//  2)
//  Noun: phone
//  action 1: the phone rings
phone.ring();
//  action 2: the phone vibrates
phone.vibrate();
//  action 3: the phone glows
phone.glow();

//  3)
//  Noun: piano
//  action 1: the piano plays a note
piano.playNote();
//  action 2: the piano silences a note
piano.muteNote();
//  action 3: the piano lets a note ring out
piano.openNote();

//  4)
//  Noun: guitarPedal
//  action 1: the guitarPedal distorts
guitarPedal.distort();
//  action 2: the guitarPedal adds reverb
guitarPedal.addReverb();
//  action 3: the guitarPedal controls the volume
guitarPedal.volControl();

//  5) 
//  Noun: fire
//  action 1: the fire burns
fire.burn();
//  action 2: the fire illuminates
fire.illum();
//  action 3: the fire dances
fire.dance();

//  6)
//  Noun: amplifier
//  action 1: the amplifier adds gain
amp.addGain();
//  action 2: the amplifier filters the high end
amp.highCutFilterOn();
//  action 3: the amplifier turns the bypass on
amp.bypassOn();

//  7)
//  Noun: programmer
//  action 1: the programmer learns code
programmer.learnCode();
//  action 2: the programmer writes code
programmer.writeCode();
//  action 3: the programmer tries various builds
programmer.tryVariBuilds();

//  8)
//  Noun: television
//  action 1: the television turns on
tv.turnOn();
//  action 2: the television changes channels
tv.changeChannel();
//  action 3: the television mutes
tv.muteOn();

//  9)
//  Noun: gate
//  action 1: the gate opens
gate.open();
//  action 2: the gate screeches
gate.screech();
//  action 3: the gate locks
gate.lock();

//  10)
//  Noun: mediaPlayer
//  action 1: the mediaPlayer shuffles songs
mediaPlayer.shuffleSongs();
//  action 2: the mediaPlayer repeats albums
mediaPlayer.repeatAlbum();
//  action 3: the mediaPlayer adds songs to a playlist
mediaPlayer.addToPlaylist();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
