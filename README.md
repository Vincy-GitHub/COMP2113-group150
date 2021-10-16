 # COMP2113-group150 
 # Author 1: Huang Wenqi, UID:3035772860
 # Author 2: Gao Huan Yan, UID:3035772846
 #
 # Description of our game “Snake”:
 # A snake will appear at a random location in the game area. Users control the movement of snake by inputting “w”, “s”, “a” and “d”, with each representing upwards, downwards, left and right. Users can choose either “classic mode” or “challenge mode” at the beginning of the game. In “classic mode”, only food will appear randomly; in “challenge mode”, both food and bombs will appear randomly, and users need to control the snake to avoid bombs as well as eating food. When the snake eats food, it grows longer and gains scores. When the score accumulates to certain levels, congratulations will pop up. The snake cannot touch the walls, bombs, and its own body or tail, otherwise the snake will be killed game ends.
 # Our system records the highest score of the user. When the record is broken, the user will be congratulated.
 # Users can pause the game and exit any time, and the game status will be kept. Users can continue their last attempt next time. However, when the snake is dead, the game status will be cleared.
 # We may have other versions where users can decide the size of the game area.
 # 

# 1.	Generation of random game sets or events
# Make the food display at random location and make the initial location of the snake random each time (But be careful not to make the location too closed to the edge). 
# 2.	Data structures for storing game status
# Use a two-element array to store the coordinate of the bait, where its data type is integer. Use an array, whose elements are two-element array coordinate record, to store the snake location (such as snake’s head and tail, and each part of the snake body)
# 3.	Dynamic memory management
# Each time, we will use a function to create a bait and its location, after the snake eats the bait or bait disappears, we will call a stop for this function and its location coordinate will disappear. If the game fails, we will delete user’s former suspension records. 
# 4.	File input/output (e.g., for loading/saving game status)
# After suspension, he can save his game status and quit the game, after he comes back and re-enter the game, he can retrieve his game process (eg. length, location, scenery/environment setting) and continue his game. So when the user choose to suspend, we should output a file (eg. named as “Suspension Status.txt”) to record user’s situation, length (an integer), location (a coordinate), environment setting (an array). When the user comes back, we will input this file (Suspension Status.txt) and recover his game process. After finishing the game, will display the score on the screen. And writes the score in a document (eg. named as “Historical scores.txt”). Then compute the highest score record in Historical scores.txt. 
# 5.	Program codes in multiple files
# Use header to divide different functions and implement them separately. 
