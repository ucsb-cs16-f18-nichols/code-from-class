// compile with -g (debug symbols): g++ -g more-gdb.cpp -o more-gdb
// then run gdb/lldb on the resulting executable: gdb more-gdb

/*

Useful commands:

help: lists available commands

run: start running the program
bt: show the call stack
up: go to an older stack frame
down: go to a more recent stack frame
print x: print the value of the expression x

Breakpoints: (set before the program starts running)
b 12: set a breakpoint on line 12
b more-gdb.cpp:12: same as above
continue: keep running
step: execute one line of code

More info here:
https://www.cs.umd.edu/~srhuang/teaching/cmsc212/gdb-tutorial-handout.pdf
https://www.tutorialspoint.com/gnu_debugger/gdb_quick_guide.htm

*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next; // next is NULL when we're at the end of the list
};

struct LinkedList {
    Node* head; // head is the starting Node of the list
    Node* tail; // a pointer to the last Node in the list
};

double sumList(Node* head){
   // base case, head is NULL, list is empty
   // if(!head) return 0;

   // add the head's element to the sum of the rest
   // of the list
   double sum = head->data + sumList(head->next);

   return sum; 
}

int main(int argc, const char *argv[])
{
    // let's make the linked list [10]

    LinkedList *l = new LinkedList;

    Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;

    one->data = 1;
    one->next = two;
    two->data = 2;
    two->next = three;
    three->data = 3;
    three->next = NULL;

    l->head = one;
    l->tail = three;

    cout << sumList(one) << endl;

    return 0;
}

/*

lawtonnichols:12-04/ (master*) $ lldb more-gdb                       [14:56:41]
(lldb) target create "more-gdb"
Traceback (most recent call last):
  File "<input>", line 1, in <module>
  File "/usr/local/Cellar/python@2/2.7.15_1/Frameworks/Python.framework/Versions/2.7/lib/python2.7/copy.py", line 52, in <module>
    import weakref
  File "/usr/local/Cellar/python@2/2.7.15_1/Frameworks/Python.framework/Versions/2.7/lib/python2.7/weakref.py", line 14, in <module>
    from _weakref import (
ImportError: cannot import name _remove_dead_weakref
Current executable set to 'more-gdb' (x86_64).
(lldb) b 47
Breakpoint 1: where = more-gdb`sumList(Node*) + 12 at more-gdb.cpp:47, address = 0x0000000100000bfc
(lldb) run
Process 15903 launched: '/Users/lawtonnichols/Desktop/cs16/Fall-2018/code-from-class/12-04/more-gdb' (x86_64)
Process 15903 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
    frame #0: 0x0000000100000bfc more-gdb`sumList(head=0x0000000100102070) at more-gdb.cpp:47
   44
   45      // add the head's element to the sum of the rest
   46      // of the list
-> 47      double sum = head->data + sumList(head->next);
   48
   49      return sum;
   50   }
Target 0: (more-gdb) stopped.
(lldb) bt
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
  * frame #0: 0x0000000100000bfc more-gdb`sumList(head=0x0000000100102070) at more-gdb.cpp:47
    frame #1: 0x0000000100000cfb more-gdb`main(argc=1, argv=0x00007ffeefbff3d0) at more-gdb.cpp:72
    frame #2: 0x00007fff55d5e015 libdyld.dylib`start + 1
(lldb) print head->data
(int) $0 = 1
(lldb) print head->next
(Node *) $1 = 0x0000000100102080
(lldb) print head->next->next
(Node *) $2 = 0x0000000100102090
(lldb) print head->next->next->data
(int) $3 = 3
(lldb) continue
Process 15903 resuming
Process 15903 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
    frame #0: 0x0000000100000bfc more-gdb`sumList(head=0x0000000100102080) at more-gdb.cpp:47
   44
   45      // add the head's element to the sum of the rest
   46      // of the list
-> 47      double sum = head->data + sumList(head->next);
   48
   49      return sum;
   50   }
Target 0: (more-gdb) stopped.
(lldb) bt
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
  * frame #0: 0x0000000100000bfc more-gdb`sumList(head=0x0000000100102080) at more-gdb.cpp:47
    frame #1: 0x0000000100000c18 more-gdb`sumList(head=0x0000000100102070) at more-gdb.cpp:47
    frame #2: 0x0000000100000cfb more-gdb`main(argc=1, argv=0x00007ffeefbff3d0) at more-gdb.cpp:72
    frame #3: 0x00007fff55d5e015 libdyld.dylib`start + 1
(lldb) print head->data
(int) $4 = 2
(lldb) continue
Process 15903 resuming
Process 15903 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
    frame #0: 0x0000000100000bfc more-gdb`sumList(head=0x0000000100102090) at more-gdb.cpp:47
   44
   45      // add the head's element to the sum of the rest
   46      // of the list
-> 47      double sum = head->data + sumList(head->next);
   48
   49      return sum;
   50   }
Target 0: (more-gdb) stopped.
(lldb) bt
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
  * frame #0: 0x0000000100000bfc more-gdb`sumList(head=0x0000000100102090) at more-gdb.cpp:47
    frame #1: 0x0000000100000c18 more-gdb`sumList(head=0x0000000100102080) at more-gdb.cpp:47
    frame #2: 0x0000000100000c18 more-gdb`sumList(head=0x0000000100102070) at more-gdb.cpp:47
    frame #3: 0x0000000100000cfb more-gdb`main(argc=1, argv=0x00007ffeefbff3d0) at more-gdb.cpp:72
    frame #4: 0x00007fff55d5e015 libdyld.dylib`start + 1
(lldb) print head->data
(int) $5 = 3
(lldb) continue
Process 15903 resuming
Process 15903 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
    frame #0: 0x0000000100000bfc more-gdb`sumList(head=0x0000000000000000) at more-gdb.cpp:47
   44
   45      // add the head's element to the sum of the rest
   46      // of the list
-> 47      double sum = head->data + sumList(head->next);
   48
   49      return sum;
   50   }
Target 0: (more-gdb) stopped.
(lldb) continue
Process 15903 resuming
Process 15903 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = EXC_BAD_ACCESS (code=1, address=0x0)
    frame #0: 0x0000000100000c00 more-gdb`sumList(head=0x0000000000000000) at more-gdb.cpp:47
   44
   45      // add the head's element to the sum of the rest
   46      // of the list
-> 47      double sum = head->data + sumList(head->next);
   48
   49      return sum;
   50   }
Target 0: (more-gdb) stopped.

*/