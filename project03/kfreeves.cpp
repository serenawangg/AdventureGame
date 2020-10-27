//Kyle Reeves
//CSCI 111 Project 03


#include <iostream>
#include "group02.h"
using namespace std;


Hero kfreeves (Hero protagonist)
{
  int scares;

  // Room 1
  int door1c;
  int door2c;
  int door3c;
  
  cout <<"Welcome to our haunted house, you will enter 6 rooms, and each time you are scared by something, you lose a life. But don't worry, you have ten lives in total, use them well. But once you get into the last room, if you are scared by anything, you will automatically lose. You will also need to find 3 items. Happy haunting!" << endl;
  cout << "Upon entering the room, you are fronted with 3 doors. One to the left(1), middle(2), and right(3). Which one do you chose? (chose a number)" << endl;

door1 :
  cin >> door1c;

  switch (door1c) 
  {
    case 1 : cout << "You chose the left door and were scared by probably the spookiest ghost you've ever seen. Guess again" << endl;
             protagonist.scares-=1;
             goto door1;
             break;
    case 2 : cout << "You chose the correct door and proceed to another set of doors..." << endl << endl;
             break;
    case 3 : cout << "You chose the right door and it opened to a brick wall, guess again." << endl;
             goto door1;
             break;
    default : cout << "That is not a valid choice, guess again." << endl;
              goto door1;
  }
//  return protagonist;


   if(scares==0)
   {
     cout << "You lost" << endl;
   }
  if (door1c == 2)
  {
    cout << "You are faced with another set of 3 doors with the same options, what do you chose?" << endl;

door2 :
    cin >> door2c;


    switch (door2c)
    {
      case 1 : cout << "You chose the correct door and proceed to yet another set of doors..." << endl << endl;
               break;
      case 2 : cout << "You open the middle door to be faced with a brainless zombie, you quickly shut the door." << endl;
               protagonist.scares-=1;
               goto door2;
               break;
      case 3 : cout << "You open the right door and face a endless black void, you decide not to jump in and shut the door, guess again." <<endl;
               goto door2;
               break;
      default : cout << "That is not a valid choice, guess again." << endl;
                goto door2;
    }
  }
 if (scares==0)
 {
   cout << "You lost" << endl;
 }

 // return protagonist;

  if (door2c == 1)
  {
    cout << "You start to get tired of this game as you face another set of doors with the same options, what is your choice?" << endl;

door3 : 
    cin >> door3c;


    switch (door3c)
    {
      case 1 : cout << "You open the left door to be faced with naked grandma. You're eyes start to bleed as you shut the door. Guess again." << endl;
               protagonist.scares-=1;
               goto door3;
               break;
      case 2 : cout << "You open the middle door to be faced with a carnival distortion mirror, you play with it for a while then guess again." << endl;
               goto door3;
               break;
      case 3 : cout << "You chose the correct door and proceed forward." << endl << endl;
               break;
      default : cout << "That is not a valid choice, guess again." << endl;
                goto door3;
    }
  }
  //return protagonist;

  if (door3c == 3)
  {
    cout << "Congrats, you have completed the puzzle successfully and found a piece of candy. Score!" << endl;
    cout << "After grabbing the candy, you walk through the only other avaliable door in the room that mysteriously brings you back to the main hall." << endl << endl;
  }


  //Room 2

  int area;
  int closet_choice;
  int nightstand_choice;
  int goback;
  int nightstand_choice2;
  int dresser_choice;
  int door_choice;
  bool has_matches = false;
  bool has_key = false;

  cout << "The next room is dimmly lit bedroom with multiple pieces of furniture (closet, nightstand, dresser), and a door leading to the next room." << endl;
  cout << "You can search the areas by typing in the corresponding number to the area \e[1m (1=closet, 2=nightstand, 3=dresser, or 4=door.)\e[0m" << endl;
area:
  cin >> area;

  //closet
  if (area == 1) {
    cout << "You approach the closet, you can either... (1=open, 2=go back)" << endl;
    cin >> closet_choice;
    if (closet_choice == 1) {
      cout << "You open the closet and a skeleton falls out, yikes." << endl;
      protagonist.scares-=1;
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
    if (closet_choice == 2){
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
  }
  //return protagonist;


 if (scares==0)
 {
   cout << "You lost" << endl;
 }
  //nightstand
  if (area == 2) {
    cout << "You approach the nightstand, you can either... (1=open, 2=go back)" << endl;
    cin >> nightstand_choice;

    if (nightstand_choice == 2) {
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
    if (nightstand_choice == 1) {
      if (has_matches == false) {
        cout << "You open the nightstand and find various gross bugs covering a rusty key. (You wonder if there is a way to deal with the bugs) Do you ... (1=grab key, 2=shut nightstand and go back)" << endl;
        cin >> nightstand_choice2;
      }
      if (has_matches == true) {
        cout << "You open the nightstand and various gross bugs covering a rusty key. Do you ... (1=grab key, 2=shut nightstand and go back, 3=burn bugs)" << endl;
        cin >> nightstand_choice2;
      }
    } 

    if (nightstand_choice2 == 1) {
      cout << "You ignore the bugs and go straight for the key. You are able to grab the key and shake the bugs off. Even though the bugs are harmless, you are still thourghly grossed out." << endl;
      protagonist.scares-=1;
      has_key = true;
      cout << "You decide to walk back, chose another area." << endl;
      goto area;
    }
    if (nightstand_choice2 == 2) {
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
    if (nightstand_choice2 == 3) {
      cout << "You burn the bugs away with your matches and grab the key. You know have the rusty key!" << endl;
      has_key = true;
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
  }
 // return protagonist;
   
 if (scares==0)
 {
   cout << "You lost" << endl;
 }

  //dresser
  if (area == 3) {
    cout << "You approach the dresser, you can either... (1=open, 2=go back)" << endl;
    cin >> dresser_choice;

    if (dresser_choice == 1) {
      cout << "You open the dresser and find a book of matches, you take the matches." << endl;
      has_matches = true;
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
    if (dresser_choice == 2) {
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
  }
  //return protagonist;

  //door
  if (area == 4) {
    if (has_key == false) {
      cout << "You approach the door, you can see there is a rusty lock on the door. Do you ... (1=try to open door, 2=go back)" << endl;
      cin >> door_choice;
    }
    if (has_key == true) {
      cout << "You approach the door, you can see there is a rusty lock on the door. Do you ... (1=try to open door, 2=go back, 3=unlock door)" << endl;
      cin >> door_choice;
    }
    if (door_choice == 1) {
      cout << "The lock prevents you from opening the door. Duh." << endl;
      cout << "You decide to walk back, chose another area." << endl;
      goto area;
    }
    if (door_choice == 2) {
      cout <<"You decide to walk back, chose another area." << endl;
      goto area;
    }
    if (door_choice == 3) {
      cout << "You unlock the door and proceed to the next room, Nice work!" << endl;
    }
  } 
  return protagonist;
}

