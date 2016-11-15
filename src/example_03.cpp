#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <glm/vec3.hpp>
//include header file for glfw library so that we can use OpenGL
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "example_03.h"
#ifdef _WIN32
static DWORD lastTime;
#else
static struct timeval lastTime;
#endif

#define PI 3.14159265 // Should be used from mathlib

using namespace std;

/*
For UC Berkeley's CS184 Fall 2016 course, assignment 3 (Bezier surfaces)
*/

//****************************************************
// Global Variables
//****************************************************
GLfloat translation[3] = {0.0f, 0.0f, 0.0f};
bool auto_strech = false;
int Width_global = 400;
int Height_global = 400;
int Z_buffer_bit_depth = 128;
vector< vector < vector < glm::vec3>>> patches; // Patches data structure [# patches][4][4][xyz point]
vector<shape> shapes; // Shapes (either triangle or quad)
bool is_adaptive; // adaptive or uniform subdivision
bool is_smooth_shade; // If not smooth, then flat shading
float step_size;
int num_steps;
bool wireframe_mode;
bool filled_mode;
float epsilon;

inline float sqr(float x) { return x*x; }



// ****************
//  PARSE 
//  Parses a .bez file, and populates the global patches vector
//  ***************
void parse_file(char* filename){
}

// ****************
// CREATE SHAPES
// Given the current patches, populate the global shapes vector
// Depending on is_adaptive, shapes will either be a vector of triangles 
// or a vector of squares
// ****************
void create_shapes(void){
}

// ****************
// ADAPTIVE SUBDIVISION
// Given a single patch and an epsilon, creates the list of triangles which subdivide the patch
// such that no point is further than epsilon away from the surface of the bezier curve
// This entire list is pushed back onto the global list of patches 
// ****************
void adaptive_subdivision(vector<vector<glm::vec3>> patch){
}

// ****************
// UNIFORM SUBDIVISION
// Given a single patch, step size, and num_steps, creates list of squares that are
// sufficiently small, and pushes them back on to the global list of shapes
// ****************
void uniform_subdivision(vector<vector<glm::vec3>> patch, float step_size, int num_steps){
}


// *****************
// TRIANGULATE 
// Given a patch and three (u,v) pairs, and global epsilon, push back onto global shape list
// *****************
void triangulate(vector<vector<glm::vec3>> patch, float p1[2], float p2[2], float p3[2]){
}

// ****************
// BEZ PATCH INTERPOLATION
// Given a patch and a point defined by (u,v)
// finds the value of the bezier surface at this point
// also finds the normal at this point
// ****************
glm::vec3 patch_interp(vector<vector<glm::vec3>> patch, float u, float v, glm::vec3 * norm) {
    glm::vec3 point = glm::vec3(0,0,0);
    return point;
}

// *****************
// BEZ CURVE INTERPOLATION
// Given a curve of four control points, finds the bezier interpolation on this curve and
// evaluates at a given u value, and finds the derivative
// *****************
glm::vec3 curve_interp(vector<glm::vec3> curve, float param, float *derivative) {
    glm::vec3 point = glm::vec3(0,0,0);
    return point; 
}


//****************************************************
// Simple init function
//****************************************************
void initializeRendering()
{
    glfwInit();
}


//****************************************************
// A routine to set a pixel by drawing a GL point.  This is not a
// general purpose routine as it assumes a lot of stuff specific to
// this example.
//****************************************************
void setPixel(float x, float y, GLfloat r, GLfloat g, GLfloat b) {
    glColor3f(r, g, b);
    glVertex2f(x+0.5, y+0.5);  // The 0.5 is to target pixel centers
    // Note: Need to check for gap bug on inst machines.
}

//****************************************************
// Keyboard inputs. Add things to match the spec! 
//****************************************************
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    switch (key) {
            
        case GLFW_KEY_ESCAPE: glfwSetWindowShouldClose(window, GLFW_TRUE); break;
        case GLFW_KEY_Q: glfwSetWindowShouldClose(window, GLFW_TRUE); break;
        case GLFW_KEY_LEFT :
            if (action && mods == GLFW_MOD_SHIFT) translation[0] -= 0.001f * Width_global; break;
        case GLFW_KEY_RIGHT:
            if (action && mods == GLFW_MOD_SHIFT) translation[0] += 0.001f * Width_global; break;
        case GLFW_KEY_UP   :
            if (action && mods == GLFW_MOD_SHIFT) translation[1] += 0.001f * Height_global; break;
        case GLFW_KEY_DOWN :
            if (action && mods == GLFW_MOD_SHIFT) translation[1] -= 0.001f * Height_global; break;
        case GLFW_KEY_F:
            if (action && mods == GLFW_MOD_SHIFT) auto_strech = !auto_strech; break;
        case GLFW_KEY_SPACE: break;
            
        default: break;
    }
    
}

void drawShapes(){

    glBegin(GL_QUADS);
    for(shape s: shapes) {
        glColor3f(0.0f, 0.0f, 1.0f);
        for(glm::vec3 v : s.vertices) {
            glVertex3f(v[0], v[1], v[2]);
        }
    }

    glEnd();

    

}

//****************************************************
// Draw a cube. You don't need this for your final assignment, but it's
// here so you don't look at a blank screen.
// Taken from https://www.ntu.edu.sg/home/ehchua/programming/opengl/CG_Examples.html
//****************************************************
void drawCube() {
    
    shapes = vector<shape>();
    shape shape1 = shape();
    
    
             // Begin drawing the color cube with 6 quads
      // Top face (y = 1.0f)
      // Define vertices in counter-clockwise (CCW) order with normal pointing out

    shape1.vertices.push_back(glm::vec3( 1.0f, 1.0f, -1.0f));
    shape1.vertices.push_back(glm::vec3(-1.0f, 1.0f, -1.0f));
    shape1.vertices.push_back(glm::vec3(-1.0f, 1.0f,  1.0f));
    shape1.vertices.push_back(glm::vec3( 1.0f, 1.0f,  1.0f));
    shapes.push_back(shape1);
      // Bottom face (y = -1.0f)
 
    shape shape2 = shape();
    shape2.vertices.push_back(glm::vec3( 1.0f, -1.0f,  1.0f));
    shape2.vertices.push_back(glm::vec3(-1.0f, -1.0f,  1.0f));
    shape2.vertices.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
    shape2.vertices.push_back(glm::vec3( 1.0f, -1.0f, -1.0f));
    shapes.push_back(shape2);

    shape shape3 = shape();    
      // Front face  (z = 1.0f)
    shape3.vertices.push_back(glm::vec3( 1.0f,  1.0f, 1.0f));
    shape3.vertices.push_back(glm::vec3(-1.0f,  1.0f, 1.0f));
    shape3.vertices.push_back(glm::vec3(-1.0f, -1.0f, 1.0f));
    shape3.vertices.push_back(glm::vec3(1.0f, -1.0f, 1.0f));
    shapes.push_back(shape3);

    shape shape4 = shape(); 
      // Back face (z = -1.0f)
    shape4.vertices.push_back(glm::vec3 (1.0f, -1.0f, -1.0f));
     shape4.vertices.push_back(glm::vec3 (-1.0f, -1.0f, -1.0f));
     shape4.vertices.push_back(glm::vec3 (-1.0f,  1.0f, -1.0f));
     shape4.vertices.push_back(glm::vec3 ( 1.0f,  1.0f, -1.0f));
 
    shapes.push_back(shape4);
    shape shape5 = shape();
    
      // Left face (x = -1.0f)
      shape5.vertices.push_back(glm::vec3(-1.0f,  1.0f,  1.0f));
       shape5.vertices.push_back(glm::vec3(-1.0f,  1.0f, -1.0f));
       shape5.vertices.push_back(glm::vec3(-1.0f, -1.0f, -1.0f));
       shape5.vertices.push_back(glm::vec3(-1.0f, -1.0f,  1.0f));
 
    shapes.push_back(shape5);
    shape shape6 = shape();
    
      // Right face (x = 1.0f)
      shape6.vertices.push_back(glm::vec3(1.0f,  1.0f, -1.0f));
      shape6.vertices.push_back(glm::vec3(1.0f,  1.0f,  1.0f));
      shape6.vertices.push_back(glm::vec3(1.0f, -1.0f,  1.0f));
      shape6.vertices.push_back(glm::vec3(1.0f, -1.0f, -1.0f));
    
    shapes.push_back(shape6);
    drawShapes();
}


//****************************************************
// function that does the actual drawing of stuff
//***************************************************
void display( GLFWwindow* window )
{
    glClearColor( 0.0f, 0.0f, 0.0f, 0.0f ); //clear background screen to black
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);                // clear the color buffer (sets everything to black)
    glMatrixMode(GL_MODELVIEW);                  // indicate we are specifying camera transformations
    glLoadIdentity();                            // make sure transformation is "zero'd"
    
    //----------------------- code to draw objects --------------------------
    glPushMatrix();
    glTranslatef (translation[0], translation[1], translation[2]);
    glRotatef(45, 1, 1, 0); //rotates the cube below
    drawCube(); // REPLACE ME!

    glPopMatrix();
    
    glfwSwapBuffers(window);

    // note: check out glPolygonMode and glShadeModel 
    // for wireframe and shading commands
    
}

//****************************************************
// function that is called when window is resized
//***************************************************
void size_callback(GLFWwindow* window, int width, int height)
{
    // Get the pixel coordinate of the window
    // it returns the size, in pixels, of the framebuffer of the specified window
    glfwGetFramebufferSize(window, &Width_global, &Height_global);
    
    glViewport(0, 0, Width_global, Height_global);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, Width_global, 0, Height_global, 1, -1);
    
    display(window);
}


//****************************************************
// the usual stuff, nothing exciting here
//****************************************************
int main(int argc, char *argv[]) {
    //This initializes glfw
    initializeRendering();
    
    GLFWwindow* window = glfwCreateWindow( Width_global, Height_global, "CS184", NULL, NULL );
    if ( !window )
    {
        cerr << "Error on window creating" << endl;
        glfwTerminate();
        return -1;
    }

    const GLFWvidmode * mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
    if ( !mode )
    {
        cerr << "Error on getting monitor" << endl;
        glfwTerminate();
        return -1;
    }
    
    glfwMakeContextCurrent( window );
    
    // Get the pixel coordinate of the window
    // it returns the size, in pixels, of the framebuffer of the specified window
    glfwGetFramebufferSize(window, &Width_global, &Height_global);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glOrtho(-3.5, 3.5, -3.5, 3.5, 5, -5);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

    glEnable(GL_DEPTH_TEST);	// enable z-buffering
    glDepthFunc(GL_LESS);

    glfwSetWindowTitle(window, "CS184");
    glfwSetWindowSizeCallback(window, size_callback);
    glfwSetKeyCallback(window, key_callback);

    while( !glfwWindowShouldClose( window ) ) // infinite loop to draw object again and again
    {   // because once object is draw then window is terminated
        display( window );
        
        if (auto_strech){
            glfwSetWindowSize(window, mode->width, mode->height);
            glfwSetWindowPos(window, 0, 0);
        }
        
        glfwPollEvents();
        
    }

    return 0;
}
