#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

// you are not required to understand how to implement the following function
void sleep(double seconds) {
    std::this_thread::sleep_for(std::chrono::microseconds(static_cast<int>(1e6 * seconds)));
}

// but you should understand everything that's happening inside the main function!
int main()
{
    cout << "Hello, world!" << endl;
    cout << "starting in 3" << endl;
    sleep(1); // stop execution and wait for 1 second
    cout << "starting in 2" << endl;
    sleep(1);
    cout << "starting in 1" << endl;
    sleep(1);
    cout << "starting now!" << endl;

    sleep(6.5);
    cout << "Hello‚ it's me" << endl;
    sleep(5.299000000000007);
    sleep(0.18599999999999994);
    cout << "I was wondering if after all these years you'd like to meet" << endl;
    sleep(5.998999999999995);
    sleep(0.20199999999999818);
    cout << "To go over everything" << endl;
    sleep(5.199000000000012);
    sleep(0.2079999999999984);
    cout << "They say that time's supposed to heal ya" << endl;
    sleep(3.5989999999999895);
    sleep(0.2080000000000055);
    cout << "But I ain't done much healing" << endl;
    sleep(2.7989999999999924);
    sleep(0.1939999999999955);
    cout << "Hello‚ can you hear me?" << endl;
    sleep(5.599000000000004);
    sleep(0.1939999999999955);
    cout << "I'm in California dreaming about who we used to be" << endl;
    sleep(5.699000000000012);
    sleep(0.20599999999999596);
    cout << "When we were younger and free" << endl;
    sleep(5.999000000000009);
    sleep(0.20400000000000018);
    cout << "I've forgotten how it felt before the world fell at our feet" << endl;
    sleep(5.699000000000012);
    sleep(0.1899999999999995);
    cout << "There's such a difference between us" << endl;
    sleep(5.998999999999995);
    sleep(0.20400000000000063);
    cout << "And a million miles" << endl;
    sleep(6.798999999999978);
    sleep(0.21399999999999864);
    cout << "Hello from the other side" << endl;
    sleep(5.599000000000018);
    sleep(0.1960000000000015);
    cout << "I must've called a thousand times" << endl;
    sleep(5.299000000000007);
    sleep(0.19599999999999795);
    cout << "To tell you I'm sorry for everything that I've done" << endl;
    sleep(5.498999999999995);
    sleep(0.19599999999999795);
    cout << "But when I call you never seem to be home" << endl;
    sleep(7.299000000000007);
    sleep(0.21400000000000574);
    cout << "Hello from the outside" << endl;
    sleep(5.198999999999984);
    sleep(0.19599999999999795);
    cout << "At least I can say that I tried" << endl;
    sleep(5.198999999999984);
    sleep(0.2080000000000055);
    cout << "To tell you I'm sorry for breaking your heart" << endl;
    sleep(5.799000000000007);
    sleep(0.19799999999999995);
    cout << "But it don't matter. It clearly doesn't tear you apart anymore" << endl;
    sleep(7.998999999999995);

    return 0;
}


