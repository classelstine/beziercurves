# CS 184 Fall 2016
Instructor: James O'Brien
Claire Asselstine 23628013 cs184-aay
James Musk 23851414 cs184-adm

Submitted by Claire Asselstine

# USAGE
‘cd’ into your assignment directory, type into the Terminal the following step by step

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./as3 [input .bex file] [value] [optional -a]

The -a switches the program from using uniform subdivision to adaptive subdivision. The value is used as a step size in U and V for uniform subdivision, and is used as an error measure for adaptive mode. 

Example: run the following from the build directory after making to get a very clean teapot 
./as3 ../beziercurves/teapot.bez 0.01 -a

There are images of examples of each attribute in the images folder.

NOTE: The arch isn't visible until you rotate it based on its original position. 

# Keyboard features
1. 'ESC': Exit
2. 'Q': Exit
3. 'F': Full screen
4. 'Shift + ↓': Translate objects down
5. 'Shift + ↑': Translate objects up
6. 'Shift + ←': Translate objects left
7. 'Shift + →': Translate objects right
8. 's': Toggles program between flat and smooth shading
9. 'w': Toggles program between filled and wireframe mode
10. Arrow keys: Rotate object
11. +/- orthographically zoom in and out

