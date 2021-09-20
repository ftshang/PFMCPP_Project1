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
//  Noun: Bike
//  action 1: brake the bike
bike.brake();
//  action 2: change gears
bike.changeGear();
//  action 3: ring the bike's bell
bike.ringBell();

//  2)
//  Noun: Mailbox
//  action 1: store mail
mailbox.storeMail();
//  action 2: close mailbox's door
mailbox.closeDoor();
//  action 3: raise mailbox's flag
mailbox.raiseFlag();
 
//  3)
//  Noun: Slot Machine
//  action 1: display game instructions
slotMachine.displayInstructions();
//  action 2: dispense coins
slotMachine.dispenseCoins();
//  action 3: trigger sound effects 
slotMachine.playSoundEffects();

//  4)
//  Noun: Treadmill
//  action 1: increase treadmill's speed
treadmill.increaseSpeed();
//  action 2: change workout selection
treadmill.changeWorkout();
//  action 3: increase incline
treadmill.increaseIncline();

//  5)
//  Noun: Phone
//  action 1: answer phone call
phone.answerCall();
//  action 2: raise volume
phone.raiseVolume();
//  action 3: power off phone
phone.powerOff();

//  6)
//  Noun: Computer
//  action 1: display OS welcome screen
computer.displayWelcomeScreen();
//  action 2: trigger screen saver mode
computer.showScreenSaver();
//  action 3: runs out of battery and shuts down
computer.shutDown();

//  7)
//  Noun: Laundry Machine
//  action 1: dispense water
laundryMachine.dispenseWater();
//  action 2: spin and wash clothes
laundryMachine.spinClothes();
//  action 3: beep when timer is over
laundryMachine.beep();

//  8)
//  Noun: Clock
//  action 1: alarm goes off
clock.soundAlarm();
//  action 2: displays current time
clock.displayTime();
//  action 3: increase minute hand
clock.increaseMinute();

//  9)
//  Noun: Hand
//  action 1: clench hand into a fast
hand.clenchFist();
//  action 2: grab an object
hand.grab();
//  action 3: release and let go of an object
hand.release();

//  10)
//  Noun: Dog
//  action 1: bark at someone
dog.bark();
//  action 2: use its legs to run
dog.run();
//  action 3: sit down for a treat
dog.sitDown();


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
