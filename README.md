 # COMP2113-group150 
 # Author 1: Huang Wenqi, UID:3035772860
 # Author 2: Gao Huan Yan, UID:3035772846
 #
 # Description of our game “Snake”:
 # A snake will appear at a random location in the game area (not too close to the boundary). Users can control the movement of snake by inputting “w”, “s”, “a” and “d”, with each representing upwards, downwards, left and right. Food will appear randomly, and users need to control the snake to eat food. When the snake eats food, it grows longer and gains scores. The snake cannot touch the wall, otherwise it will be killed and game ends.
 # Our system records the highest score of the user. When the record is broken, the user will be congratulated.
 # Users can pause the game and exit any time, and the game status will be kept. Users can continue their last attempt next time by inputting “continue”. However, when the snake is dead, the game status will be cleared.


# 1.	Generation of random game sets or events
# Make the food display at random location and make the initial location of the snake random each time (But be careful not to make the location too close to the edge). 
# 2.	Data structures for storing game status
# Use a two-element array to store the coordinate of the bait, where its data type is integer. Use an array, whose elements are two-element array coordinates record, to store the snake location (such as snake’s head and tail, and each part of the snake body). Use a vector to store the historicsl scores.
# 3.	Dynamic memory management
# Each time, we will use a function to create a bait and its location, after the snake eats the bait or bait disappears, we will call a stop for this function and its location coordinate will disappear. If the game fails, we will delete user’s former suspension records. Every time the game ends, the score of this game will be appended to the end of the vector storing historical scores.
# 4.	File input/output (e.g., for loading/saving game status)
# After suspension, he can save his game status and quit the game, after he comes back and re-enters the game, he can retrieve his game process (eg. length, location, environment setting) and continue his game. So when the user choose to suspend, we should output a file (eg. named as “Suspension Status.txt”) to record user’s situation, length (an integer), location (a coordinate), environment setting (an array). When the user comes back, we will input this file (Suspension Status.txt) and recover his game process.
# 5.	Program codes in multiple files
# Use header to divide different functions and implement them separately. 
