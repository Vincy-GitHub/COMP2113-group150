 # COMP2113-group150 
 # Author 1: Huang Wenqi, UID:3035772860
 # Author 2: Gao Huan Yan, UID:3035772846
 #
 # Description of our game “Snake”:
 # A snake will appear at a random location in the game area (not too close to the boundary). Users can control the movement of snake by inputting “w”, “s”, “a” and “d”, with each representing upwards, downwards, left and right. Food will appear randomly, and users need to control the snake to eat food. When the snake eats food, it grows longer and gains scores. The snake cannot touch the wall, otherwise it will be killed and game ends. The score will be shown then.
 # Our system records the highest score of the user. When the record is broken, the user will be congratulated.
 # Users can pause the game and exit any time, and the game status will be kept. Users can continue their last attempt next time by inputting “continue”. However, when the snake is dead, the game status will be cleared.


# 1.	Generation of random game sets or events
# Make the food display at random location and make the initial location of the snake random each time (But be careful not to make the location too close to the edge). But the snake cannot overlap with the food.  
# 2.	Data structures for storing game status
# Use a two-element array to store the coordinate of the bait, where its data type is integer. Use an array, whose elements are two-element array coordinates record, to store the snake location (such as snake’s head and tail, and each part of the snake body). Use a dynamic array to store the historical scores. 
# 3.	Dynamic memory management
# Each time, we will use a function to create a bait and its location, after the snake eats the bait or bait disappears, we will call a stop for this function and its location coordinate will disappear. If the game fails, we will delete user’s former suspension records. Every time the game ends, the score of this game will be appended to the end of the vector storing historical scores.
# 4.	File input/output (e.g., for loading/saving game status)
# After suspension, he can save his game status and quit the game, after he comes back and re-enters the game, he can retrieve his game process (eg. length, location) and recover the environment, then continue his game. So when the user choose to suspend, we should output a file (eg. named as “Suspension.txt”) to record user’s situation a 2D array, location of the food ( 2D array ) length (an integer). When the user comes back, we will input this file (“Suspension.txt”) and recover his game process. 
# When the game ends, we display the length of snake on the screen, at the same time, we input a historical highest score file(“historical_highest_score.txt”), if the file does not exist, we create one then. And we make a comparison of length and historical records, if the current length is higher, then we renew the historical_highest_score.txt. 
# 5.	Program codes in multiple files
# Use header to divide different functions and implement them separately.

#Instructions:
#Compile as usual. After compilation, run "snake". Users can input “w”, “s”, “a” or “d” to move the snake upwards, downwards, left or right. If users want to pause the game, input “pause” and the game status will be saved. Next time if he or she wants to continue last unfinished game, input “continue”.
