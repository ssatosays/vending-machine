#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int get_random_number()
{
    std::srand(time(NULL));
    return rand() % 100 + 1;  // 1~100
}

int main()
{    
    printf("// begin\n");
    printf("First Activity\n");
    if(50 < get_random_number()) {
        printf("Second Activity\n");  // 51~100
    }
    printf("// end\n");

    return 0;
}
