# Deluxe Poker System
<img alt="Static Badge" src="https://img.shields.io/badge/Personal_Project-%23DA27F5?style=for-the-badge&logo=github"> <br><br>
<img alt="Static Badge" src="https://img.shields.io/badge/C%2B%2B_Programming-blue"> <img alt="Static Badge" src="https://img.shields.io/badge/Development-Backend-%23F5D627"> <img alt="Static Badge" src="https://img.shields.io/badge/plugins-CMake-red?logo=cmake">
<br><br>

<h2>📜 Details and Instructions:</h2>
For this project, I am currently working on a C++ project called Deluxe-Poker-System(Poker game). When running this project, it will display the menu bar and it will print each number of inputs from the list. All four inputs from the list are single player mode, two player mode, instructions, free credits, and display credits.<br><br>

Menu code snippet example:<br>
[post image here]<br><br>

<h3>Poker Hand Ranks:</h3>
Here are all types of poker hands from best to worst: <br><br>
🥇 Five of a Kind<br>
🥈 Royal Flush<br>
🥉 Straight Flush<br>
4. Four of a Kind<br>
5. Full House<br>
6. Flush<br>
7. Straight<br>
8. Three of a Kind<br>
9. Double Pairs<br>
10. Pair<br>
11. High Card<br><br>

There are a total of 65 deck of cards. Numbers (from Ace to 10), Face (Jack, Queen, and then King), then 5 suits (Heart, Diamond, Club, Spade, and Quatrefoil).<br><br>

<h3>Five of a Kind: </h3><p>This poker hand is exclusively available for this project instead of Royal Flush hand being the best poker hand. Here is an example of a poker hand of five of a kind: </p><br>
(5/Heart, 5/Diamond, 5/Club, 5/Spade, 5/Quatrefoil)<br>
(K/Heart, K/Diamond, K/Club, K/Spade, K/Quatrefoil)<br><br>

<h2>CMake Details</h2><img alt="Static Badge" src="https://img.shields.io/badge/CMake-v3.31-red?logo=CMake">

One of the tools that I have been using to work on my project is called CMake and it is an open-source meta-build system that can allow to connect or merge all C++ and header files. Like on Windows OS, Microsoft Visual Studio is perfect for users that are creating C++ projects, but for Linux, CMake is highly recommended so that it can build C/C++ projects.<br><br>

<h4>Here are some examples of implementing CMake to build each files for this project:</h4>
Deluxe-Poker-System/CMakeLists.txt file (top level)<br>

```
cmake_minimum_required(VERSION 3.31)
project(Deluxe-Poker-System)
set(CMAKE-CXX-STANDARD 20)
```
<br>
Line 39: The current version of CMake that will build this project<br>
Line 40: The title of the project<br>
Line 41: Calling the version of C++ for CMake (C++20 is recommended for new C++ features)<br>
