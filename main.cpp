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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Athlete
//  action 1: lifts weights in the gym.
athlete.liftsWeights();
//  action 2: runs a race.
athlete.runsRace();
//  action 3: eats healthy meals
athlete.eatsHealthy();

//  2)
//  Noun: farmer
//  action 1: a farmer harvests crops.
farmer.harvestCrops();
//  action 2: a farmer milks cows.
farmer.milksCows();
//  action 3: a farmer feeds goats.
farmer.feedsGoats();

//  3)
//  Noun: Data Scientist
//  action 1: Analyze large amounts of data
dataScientist.analyzeData();
//  action 2: Cleans and processes raw data
dataScientist.cleanData();
//  action 3: Builds and models based on data
dataScientist.modelData();

//  4)
//  Noun: Gardener
//  action 1: a gardener plants flowers
gardener.plantsFlowers();
//  action 2: a gardener maintains a garden
gardener.maintainsGarden();
//  action 3: a gardener controls pests to help plants grow
gardener.controlsPest();

//  5)
//  Noun: Surgeon 
//  action 1: a surgeon performs surgical procedures
surgeon.performsSurgeries();
//  action 2: a surgeon washes his hands.
surgeon.washesHands();
//  action 3: a surgeon stitches wounds
surgeon.stitchesWounds();

//  6)
//  Noun: Driver
//  action 1: operates a vehicle
driver.operatesVehicle();
//  action 2: navigates routes
driver.navigatesRoutes();
//  action 3: transports goods
driver.transportsGoods();

//  7)
//  Noun: Engineer
//  action 1: designs structures
engineer.designsStructures();
//  action 2: draws plans
engineer.drawsPlans();
//  action 3: measure distances
engineer.measureDistances();

//  8)
//  Noun: Detective
//  action 1: investigates crimes
detective.investigatesCrimes();
//  action 2: gathers evidence
detective.gathersEvidence();
//  action 3: develops theories
detective.developsTheories();

//  9)
//  Noun: Writer
//  action 1: writes books
writer.writesBooks();
//  action 2: conducts research
writer.conductsResearch();
//  action 3: edits work
writer.editsWork();

//  10)
//  Noun: Actor
//  action 1: studies a script
actor.studiesScript();
//  action 2: rehearses scenes
actor.rehearsesScenes();
//  action 3: plays a character
actor.playsCharacter();



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
