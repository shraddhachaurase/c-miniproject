#include "unity.h"
#include "unity_internals.h"
#include <fun.h>

/* Modify these two lines according to the project */
#define PROJECT_NAME    "Typing Game"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void openAbout_me(void)
{
  TEST_ASSERT_EQUAL_CHAR_ARRAY_MESSAGE(SUCCESS , About_me());
}



int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(openAbout_me);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}
