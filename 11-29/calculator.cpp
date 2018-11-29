#include <iostream>
#include <cstdlib>
using namespace std;

struct Expression {
    bool isNumber; // if isNumber == true, then value is set
    int value;
    char operation; // otherwise, this is an operation with
                    // a left and right operand
    Expression *left;
    Expression *right;
};

int evaluate(Expression *e) {
    if (e->isNumber) {
        return e->value; // base case
    }

    // if we got here, e is an operation
    // with a left and a right

    // recursive case:
    // recursively evaluate the left and the right
    int left_result = evaluate(e->left);
    int right_result = evaluate(e->right);

    // build up the final answer using the answers
    // obtained by evaluating the sub-expressions
    if        (e->operation == '+') {
        return left_result + right_result;
    } else if (e->operation == '-') {
        return left_result - right_result;
    } else if (e->operation == '*') {
        return left_result * right_result;
    } else if (e->operation == '/') {
        return left_result / right_result;
    } else {
        cerr << "Invalid operation: " << e->operation << endl;;
        exit(1);
    }
}

int main(int argc, const char *argv[])
{
    // we'll construct the expression (4 + 5) * (8 - (7 / 3))
    // (which evaluates to 9 * (8 - 2) = 54)
    // it'll look like:
    //           *
    //          / \
    //         /   \
    //        /     \
    //       /       \
    //      /         \
    //     +           -
    //    / \         / \
    //   /   \       /   \
    //  /     \     /     \
    // 4       5   /       \
    //            8         ÷
    //                     / \
    //                    /   \
    //                   7     3

    Expression four = {true, 4};
    Expression five = {true, 5};
    Expression eight = {true, 8};
    Expression seven = {true, 7};
    Expression three = {true, 3};
    Expression divide = {false, 0, '/', &seven, &three};
    Expression plus = {false, 0, '+', &four, &five};
    Expression minus = {false, 0, '-', &eight, &divide};
    Expression times = {false, 0, '*', &plus, &minus};

    cout << evaluate(&times) << endl;

    return 0;
}