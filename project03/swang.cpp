//Serena Wang
//CSCI 111 Project 03
#include<iostream>
#include "group02.h"
using namespace std;

Hero swang(Hero protagonist)
{
  int scares;
  
  string choice1;
  string closet;
  string bed;
  string TV;
  string search;
 
// Room 3
  cout << "Welcome to Room 3! This room has 3 hidden parts:inside the closet, under the bed, and behind the TV. You must find the wand to move on. Remember, if you are scared by a ghost, you lose a life!" << endl;
  cout << "Which part of the room would you like to explore? [search]"<< endl;
  cin >> search;
  do
  {
   cout << "Choose 1: closet, bed, TV" << endl;
   cin >> choice1;

   if (choice1 == "closet")
   {
     cout << "Sorry, you've been scared by a ghost! You lose one life. Try again." << endl;
     protagonist.scares-=1;
   }
   else if (choice1 == "bed")
   {
     cout << "You've found a wand! Congrats." << endl;
    protagonist.items+=1; 
   }
   else if (choice1 == "TV")
   {
     cout << "There is nothing here. Keep looking." << endl;
   }
   else 
   {
     cout <<"Invalid choice, try again." << endl;
   }
  } while (choice1 != "bed"); 

 





  string enter;

  cout << "Please type in 'enter' to open the door to Room 4." << endl;
  cin >> enter;


// Room 4



  string choice2;
  string dollhouse;
  string pumpkin;
  string blankets;

  cout << "You have made it to Room 4. In this room, you will need to find a key to open the bathroom, and a 3 letter code written on a pillow to open the lock to the treasure chest inside the bathroom." << endl;

  cout << "Reminder: don't get scared or you lose a life!" << endl;
  

     cout << "There are 3 places to search for the key: inside the dollhouse, inside the pumpkin, and under the blankets on the bed." << endl;
     cout << "Where would you like to explore? [search]" << endl;
     cin >> search;
  do 
  {
     cout << "Choose 1: dollhouse, pumpkin, or blankets" << endl;

     cin >> choice2;
  
 
    if (choice2 == "dollhouse")
    {
        cout << "The dollhouse doesn't have what you need. Keep looking." << endl;
    }
    else if (choice2 == "blankets")
    {
        cout << "You have been scared by a ghost! You lose one life, keep looking for the key." << endl;
        protagonist.scares-=1;
    } 
    else if (choice2 == "pumpkin") 
    {
        cout <<"You have found the key!" << endl;
    }
    else 
    {
        cout << "This is an invalid choice, try again." << endl;
    }
  } while (choice2 != "pumpkin");





  cout <<"Now that you have found the key, you can now find the code for the lock on the treasure chest. The pillow is hidden somewhere in the room. There are 5 places to look for it: behind the skeleton, on top of the bunkbed, inside the dresser, behind the scary clown mask, and under the flying broomstick." << endl;
 string choice4; 
 string skeleton;
 string bunkbed;
 string mask;
 string dresser;
 string broomstick;
do
{


  cout << "Choose 1: skeleton, bunkbed, dresser, mask, or broomstick" << endl;

  cin >>choice4;

  if (choice4 == "skeleton")
  {
    cout << "The ghost left before you got here. You do not lose a life, keep looking." << endl;
  }
  else if (choice4 == "bunkbed")
  {
    cout << "There are pillows, but no codes on them, try again" << endl;
  }
  else if (choice4 == "dresser")
  {
    cout <<"There is only a vampire costume in here, keep looking!" << endl;
  }
  else if (choice4 == "mask")
  {
    cout << "There is a pillow with the code: BOO" << endl;
  }
  else if (choice4 == "broomstick")
  {
    cout << "There is nothing here to see, try again" << endl;
  }
  else 
  {
    cout <<"That is an invalid choice, please enter a valid choice." << endl;
  }
} while (choice4 != "mask");

  cout <<"Now you have the key and the code, so head on off to the bathroom." << endl;
  cout <<"Please enter the word 'key' to use the key to open the door to the bathroom." << endl;

  string key;
  cin >> key;

  cout <<"You are in the bathroom now, and the treasure box is at the sink." << endl;
  string code; 
  string BOO;
  do
{
  cout <<"To open the treasure chest, please enter in the 3 letter code from the pillow." << endl;
  
  cin >> code;

  if (code == "BOO")
  {
    cout << "You have opened the treasure chest! You found a pass to the fifth and sixth room. Good luck!" << endl;
  }
  else 
  {
    cout << "That is not the right code, please try again." << endl; 
  }

} while (code !="BOO");







return protagonist;
}
