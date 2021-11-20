 # COMP2113-group150 
 # Author 1: Huang Wenqi, UID:3035772860
 # Author 2: Gao Huan Yan, UID:3035772846
 #
 # Description of our game “Snake”:
 # A snake will appear at a random location in the game area (not too close to the boundary). Users can control the movement of snake by inputting “w”, “s”, “a” and “d”, with each representing upwards, downwards, left and right. Food will appear randomly, and users need to control the snake to eat food. When the snake eats food, it grows longer and gains scores. The snake cannot touch the wall, otherwise it will be killed and game ends. The score will be shown then.
 # Our system records the highest score of the user. When the record is broken, the user will be congratulated.
 # Users can pause the game and exit any time, and the game status will be kept. Users can continue their last attempt next time by inputting “continue”. However, when the snake is dead, the game status will be cleared.
 
# list of features implemented:
# 1.	Generation of random game sets or events
# A snake and a food will be generated randomly at the beginning of the game. The snake will not be too close to the boundary. The food cannot overlap with the snake. Every time the food is eaten by the snake, another food will appear randomly.
# 2.	Data structures for storing game status
# Use a two-element array to store the coordinate of the food, where its data type is integer. Use a pointer that points to a 2-D array to store the whole snake's location. Use an integer to store the length of the snake. Use a 2-D array to store the screen output (including boundary, snake's coordinates and food's coordinates). Use a file to store the historical highest score. 
# 3.	Dynamic memory management
# Everytime the snake moves, we create a new pointer called "newsnake" to store the new location of the snake. After that, we delete the old "snake" and let "snake" point to the same 2-D array that "newsnake" points to. When we leave the function where "newsnake" is defined, "newsnake" will disappear and "snake" will have been updated.
# 4.	File input/output (e.g., for loading/saving game status)
# After suspension, the user can save his/her game status and quit the game. After the user comes back and re-enters the game, he/she can retrieve the past game process (eg. length, location) and continue the game. So when the user choose to pause, we should output a file (eg. named as “Suspension.txt”) to record user’s game status (location of the snake ( 2D array pointed to by "snake" ), location of the food ( 2D array ) and length (an integer)). When the user comes back, we will input this file (“Suspension.txt”) and recover his game process. 
# When the game ends, we display the length of snake on the screen, at the same time, we input a historical highest score file(“historical_highest_score.txt”), if the file does not exist, we create one then. And we make a comparison of length and historical records, if the current length is higher, then we renew the historical_highest_score.txt. 
# 5.	Program codes in multiple files
# Use header to divide different functions and implement them separately.

# Instructions:
# Compile as usual. After compilation, run "snake". Users can input “w”, “s”, “a” or “d” to move the snake upwards, downwards, left or right. If users want to pause the game, input “pause” and the game status will be saved. Next time if he or she wants to continue last unfinished game, input “continue”.

# Library included:
# We use \<cstdlib> to clear the whole screen each time when the snake moves. 
# We use \<stdlib.h> to produce the random location of food and snake. 
# We use \<fstream> to include the file I/O for inputting and outputting files. 
# We use \<sstream> to use the getline function to read the whole line of input files. 
# We use \<string> to get some functions for string type. 
