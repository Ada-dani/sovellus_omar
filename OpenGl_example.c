/* Hello World for OpenGL  */

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void drawing(void);

/* This program will create a window with GLUT-library 
 * that will remain open until it will be closed  */

int main(int argc, char** argv)
{
    glutInit(&argc, argv); /* initializarion of OpenGL library */
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); /*define a drawing mode */
    glutInitWindowSize(300, 300); /* Define a size to a window */
    glutInitWindowPosition(100, 100); /* Define a placement of a window */
    glutCreateWindow("Window title"); /* Put a window title text to window */

    glClearColor(0.0, 0.0, 0.0, 0.0);  /* Define the background color */

    glutDisplayFunc(drawing); /* call function that will create a content to window */
    glutMainLoop(); /* Leave the window open until CTRL-C */
    return 0;
}


/*

*/
void drawing(void)
{
    glClear(GL_COLOR_BUFFER_BIT); /* clear background*/

    glColor3f(1.0, 1.0, 1.0); /* define drawing color */
    glBegin(GL_TRIANGLES);    /* Start to make combined object */
      glVertex3f (-1.0, -1.0, 0.0); /* Draw one line */
      glVertex3f (1.0, -1.0, 0.0); /* Draw one line */
      glVertex3f (0.0, 1.0, 0.0); /* Draw one line */
    glEnd(); /* end combined object*/

    glFlush();  /* put everything to the screen */
}

