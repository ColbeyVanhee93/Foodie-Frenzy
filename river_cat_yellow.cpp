#include <iostream>
#include <string>

using namespace std;

int main() {
   cout << "Welcome to A Culinary Adventure Blog!" << endl;
   cout << "In this blog, we will explore different recipes from around the world." << endl;

   string cuisine;

   cout << endl << "What cuisine would you like to explore today? (e.g. Italian, Mexican, Japanese, etc.) ";
   getline(cin, cuisine);

   cout << endl << "Great! We'll explore some " << cuisine << " recipes today." << endl;

   string recipe;

   cout << endl << "Let's start with a classic " << cuisine << " recipe. What would you like to make (e.g. lasagna, tacos, sushi, etc.)? ";
   getline(cin, recipe);

   cout << endl << "Excellent choice! Let's make some " << recipe << "!" << endl;

   string ingredients;

   cout << endl << "What ingredients do we need to make " << recipe << "? (separate ingredients with commas): ";
   getline(cin, ingredients);

   cout << endl << "Got it! So we need these ingredients to make " << recipe << ": "<< ingredients << endl;

   string prep;

   cout << endl << "Let's start preparing our " << recipe << ". What do we need to do first? ";
   getline(cin, prep);

   cout << endl << "OK! Let's " << prep << " the ingredients first." << endl;

   int minutes = 0;

   cout << endl << "How many minutes does this step take? ";
   cin >> minutes;

   cout << endl << "Good to know! Let's set a timer for " << minutes << " minutes." << endl;

   cout << endl << "Now we wait while the timer counts down..." << endl;

   string nextStep;

   cout << endl << "The timer is done! What's the next step to making " << recipe << "? ";
   getline(cin, nextStep);

   cout << endl << "Great! Let's " << nextStep <<" next." << endl;

   int minutes2 = 0;

   cout << endl << "How many minutes does this step take? ";
   cin >> minutes2;

   cout << endl << "Got it! Let's set a timer for " << minutes2 << " minutes." << endl;

   cout << endl << "Now we wait while the timer counts down..." << endl;

   string nextStep2;

   cout << endl << "The timer is done! What's the next step to making " << recipe << "? ";
   getline(cin, nextStep2);

   cout << endl << "Okay! Let's " << nextStep2 <<" next."  << endl;

   int minutes3 = 0;

   cout << endl << "How many minutes does this step take? ";
   cin >> minutes3;

   cout << endl << "Great! Let's set a timer for " << minutes3 << " minutes." << endl;

   cout << endl << "Now we wait while the timer counts down..." << endl;

   string nextStep3;

   cout << endl << "The timer is done! What's the next step to making " << recipe << "? ";
   getline(cin, nextStep3);

   cout << endl << "Excellent! Let's " << nextStep3 <<" next."  << endl;

   int minutes4 = 0;

   cout << endl << "How many minutes does this step take? ";
   cin >> minutes4;

   cout << endl << "Great! Let's set a timer for " << minutes4 << " minutes. " << endl;

   cout << endl << "Now we wait while the timer counts down..." << endl;

   string nextStep4;

   cout << endl << "The timer is done! What's the next step to making " << recipe << "? ";
   getline(cin, nextStep4);

   cout << endl << "Fantastic! Let's " << nextStep4 <<" once the timer is done." << endl;

   int minutes5 = 0;

   cout << endl << "How many minutes does this step take? ";
   cin >> minutes5;

   cout << endl << "Great! Let's set a timer for " << minutes5 << " minutes." << endl;

   cout << endl << "Now we wait while the timer counts down..." << endl;

   cout << endl << "The timer is done! Our " << recipe << " is ready to be served!" << endl;

   string review;

   cout << endl << "How was the " << recipe << " you made? (e.g. delicious, spicy, etc.) ";
   getline(cin, review);

   cout << endl << "Glad to hear that! Your " << recipe << " turned out " << review << "!" << endl;

   cout << endl << "Thanks for joining us for A Culinary Adventure. We hope you enjoyed exploring this " << cuisine << " recipe!" << endl; 

   return 0;
}