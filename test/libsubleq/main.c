#include "utest/utest.h"
#include "libsubleq.h"

UTEST(_, returns_normal_for_no_op_program)
{
    double program[] = { 0, 0, -1, };

    ASSERT_EQ(
        SUBLEQ_STATUS_NORMAL, 
        subleq_execute(
            program,
            sizeof(program),
            &(subleq_execute_options){ }));
}

UTEST(_, returns_invalid_program_when_size_is_not_multiple_of_three)
{
    double program[] = { 0, 0 };

    ASSERT_EQ(
        SUBLEQ_STATUS_INVALID_PROGRAM, 
        subleq_execute(
            program,
            sizeof(program),
            &(subleq_execute_options){ }));
}



UTEST_MAIN();
