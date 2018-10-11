#include "tdd.h"
#include "shapes.h"

void test_drawTriangle() {
    assertEquals("", drawTriangle(4), "width=4 case");
    assertEquals("", drawTriangle(-2), "width=-2 case");
    assertEquals(" * \n***\n", drawTriangle(3), "width=3 case");
    assertEquals("  *  \n"
                 " *** \n"
                 "*****\n", 
        drawTriangle(5), "width=5 case");
    assertEquals("   *   \n"
                 "  ***  \n"
                 " ***** \n" 
                 "*******\n", 
        drawTriangle(7), "width=7 case");
}

int main(int argc, char *argv[])
{
    // just run the tests
    test_drawTriangle();

    return 0;
}