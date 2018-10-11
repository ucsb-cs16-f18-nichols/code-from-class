#include "shapes.h"

string drawTriangle(int width) {
    if (width % 2 == 0 || width < 3) {
        return ""; // even/negative/zero widths don't work
    }

    string res = "";
    // if we got this far, width was odd
    for (int i = 0; i < (width + 1) / 2; i++) {
        int spaces = ((width + 1) / 2 - 1) - i;
        int stars = i * 2 + 1;
        // output spaces, if any
        for (int j = 0; j < spaces; j++) {
            res += " ";
        }

        // output stars
        for (int j = 0; j < stars; j++) {
            res += "*";
        }


        // output spaces again
        for (int j = 0; j < spaces; j++) {
            res += " ";
        }

        // finally add a newline
        res += "\n";
    }

    return res;
}