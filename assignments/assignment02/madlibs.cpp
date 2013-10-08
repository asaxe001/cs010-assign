//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment02/madlibs.cpp 
/// @brief Assignment 02 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 4, 2013
///
/// @par Enrollment Info
///     Lecture Section: 001
/// @par 
///     Lab Section: 028
/// @par 
///     TA: Mahmudul Hasan
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
using namespace std;
// create a string variable consisting of 80 dashes
string measuringStick(80, '=');

// create string variables for all the elements of the story.
string eagleAdj1="UN-DEFINED";
string eagleAdj2="UN-DEFINED";
string animalThatIsWise="UN-DEFINED";
string treeAdj="UN-DEFINED";
string nestAdj="UN-DEFINED";
string someDrink="UN-DEFINED";
string colorColor="UN-DEFINED";
string speechAdv="UN-DEFINED";
string companionAdj="UN-DEFINED";
string giantAdj="UN-DEFINED";
string mealTime="UN-DEFINED";
string dragonAdj="UN-DEFINED";
string visitorsAdj="UN-DEFINED";
string burstAdj="UN-DEFINED";
string flamesAdj="UN-DEFINED";
string treasure1Noun="UN-DEFINED";
string treasure2Noun="UN-DEFINED";
string adventureAdj="UN-DEFINED";
string oceanAdj="UN-DEFINED";
string islandAdj="UN-DEFINED";
string animalType="UN-DEFINED";
string starsAdj="UN-DEFINED";
string foodOne="UN-DEFINED";
string foodTwo="UN-DEFINED";
string desert="UN-DEFINED";
string placeOne="UN-DEFINED";
string placeTwo="UN-DEFINED";
string windAdj1="UN-DEFINED";
string windAdj2="UN-DEFINED";
string number="UN-DEFINED";
string relatives="UN-DEFINED";
string homeVerb="UN-DEFINED";
string monsters="UN-DEFINED";


int main()
{
    
    // Explain the use of script to the user
    cout << "Please enter the following things separated by spaces or "
        << "newlines\n" << endl;
    
    cout << "16 Adjectives:\n";
    cin >> eagleAdj1 >> eagleAdj2 >> treeAdj >> nestAdj >> companionAdj
        >> giantAdj >> dragonAdj >> visitorsAdj >> burstAdj >> flamesAdj
        >> adventureAdj >> oceanAdj >> islandAdj >> starsAdj >> windAdj1
        >> windAdj2;
    cout << "----</adjectives>----\n" << endl;
    
    cout << "One Adverb:\n";
    cin >> speechAdv;
    cout << "----</adverbs>----\n" << endl;
    
    cout << "Two Nouns\n";
    cin >> treasure1Noun >> treasure2Noun;
    cout << "----</nouns>----\n" << endl;
    
    cout << "One verb in the present tense:\n";
    cin >> homeVerb;
    cout << "----</>----\n" << endl;
    
    cout << "A color, 2 animals, 2 places, a number, a plural for relatives,"
        << " and plural monsters:\n";
    cin >> colorColor >> animalThatIsWise >> animalType >> placeOne >> placeTwo
        >> number >> relatives >> monsters;
    cout << "----</random>----\n" << endl;
    
    cout << "A Meal Time, name of a drink, 2 foods, and a desert:\n";
    cin >> mealTime >> someDrink >> foodOne >> foodTwo >> desert;
    cout << "----</food>----\n" << endl;
    
    
    // cout << "\n";
    // cin >>;
    // cout << "----</>----\n" << endl;



    // Output the measuring stick of 80 "="
    cout << endl << measuringStick << endl;
    
    
    
    // First Paragraph
    cout << "Once upon a time, when Narnia was still young, a/an "
        << eagleAdj1 << ", young eagle" << endl
        
        << "named Sharpbeak decided to set out for an adventure. A wise "
        << animalThatIsWise << " climbed" << endl
        
        << "his " << treeAdj << " tree to talk to him before he left. "
        << "He crawled into the eagle’s" << endl
        
        << nestAdj << " nest and said, \"That was a long climb. I’m thirsty."
        << " May I have a cup" << endl
        
        << "of " << someDrink << "?\"" << endl;
    cout << endl;
    
    
    // Second Paragraph
    cout << "As the two friends watched the sun set over the "
        << colorColor << " mountains, the eagle" << endl
        
        << "said " << speechAdv << ", \"I wonder what’s on the other side "
        << "of those mountains?\" His" << endl
        
        << companionAdj << " companion warned him, \"Beware of the "
        << giantAdj << " giants in the north." << endl
        
        << "They like nothing better than to eat us Talking Animals for "
        << mealTime << " or even" << endl
        
        << "for a snack.\"" << endl;
    cout << endl;
    
    
    // Third Paragraph
    cout << "Sharpbeak promised he would avoid the giants. "
        << "His friend said, \"Don’t forget" << endl
        
        << "that there are also " << dragonAdj << " dragons living on some "
        << "of the mountaintops. They" << endl
        
        << "don’t appreciate " << visitorsAdj << " visitors. If you surprise "
        << "them, they may blast you" << endl
        
        << "with a " << burstAdj << " burst of their " << flamesAdj
        << " flames. And definitely don’t disturb" << endl
        
        << "their treasure of " << treasure1Noun << " and " << treasure2Noun
        << ".\"" << endl;
    cout << endl;
    
    
    // Fourth Paragraph
    cout << "The eagle said, \"I’ll be sure to watch out for dragons "
        << "when I go on my" << endl
        
        << adventureAdj << " adventure.\" \"Oh,\" added Sharpbeak’s friend, "
        << "\"I wouldn’t advise you" << endl
        
        << "to fly over the " << oceanAdj << " ocean either. What if you "
        << "flew as far as you could," << endl
        
        << "and you didn’t find a/an " << islandAdj
        << " island where you could land?\" The eagle" << endl
        
        << "looked worried. His wise friend added, \"If you ever find "
        << "yourself in dangerous" << endl
        
        << "circumstances, remember that you can call on Aslan to protect you. "
        << "I heard that" << endl
        
        << "once he once allowed a timid " << animalType
        << " to walk safely across a stormy lake" << endl
        
        << "without sinking.\"" << endl;
        cout << endl;
    
    
    // Fifth Paragraph
    cout << "\"My,\" said Sharpbeak, \"that would be a terrible thing.\""
        << "He looked up at the" << endl
        
        << starsAdj << " stars, twinkling "
        << "in the sky. The two friends had spoken long into" << endl
        
        << "the night. \"I didn’t realize it was so late,\" "
        << "he said. All I have to offer you" << endl
        
        << "to eat is " << foodOne << " and " << foodTwo
        << ".\" \"That would be nice,\" said his friend. He" << endl
        
        << "reached into his pocket and said, \"and we could have this "
        << desert << " for" << endl
        
        << "dessert. But, after we eat I had better scurry home to my "
        << placeOne << ", since I" << endl
        
        << "can’t imagine sleeping in a tree. I mean, if a storm comes up, "
        << "you have the" << endl
        
        << "wind blowing " << windAdj1 << " and " << windAdj2
        << " rain pouring down in torrents. I’m much" << endl
        
        << "happier living in a " << placeTwo << " with my "
        << number << " " << relatives << ". While you go on" << endl
        
        << "your journey, I will stay home and " << homeVerb << ".\"" << endl;
    cout << endl;
    
    
    // Sixth Paragraph
    cout << "The two friends gave each other a big hug. "
        << "The eagle’s feathers tickled his" << endl
        
        << "friend, who said, \"May Aslan watch over you during your travels.\""
        << " The next" << endl
        
        << "morning the " << eagleAdj2 << " eagle soared off to begin his "
        << "adventure. Sharpbeak would" << endl
        
        << "be sure to avoid all of the giants, dragons and " << monsters
        << " along the way." << endl
        << "But that’s a story for another day." << endl;
    // cout << endl;
    
    
    
    // Output the measuring stick of 80 "="
    cout << measuringStick << endl;
    return 0;
}