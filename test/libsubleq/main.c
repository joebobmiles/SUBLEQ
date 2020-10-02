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

UTEST(_, no_op_program_does_not_change)
{
    double program[] = { 0, 0, -1 };

    subleq_execute(program, sizeof(program), &(subleq_execute_options){ });

    ASSERT_EQ(0, program[0]);
    ASSERT_EQ(0, program[1]);
    ASSERT_EQ(-1, program[2]);
}

UTEST(_, subtracts_A_from_B_and_stores_in_B)
{
    double program[] = { 1, 1, -1 };

    subleq_execute(
        program,
        sizeof(program),
        &(subleq_execute_options){ .instruction_count = 1 });

    ASSERT_EQ(1, program[0]);
    ASSERT_EQ(0, program[1]);
    ASSERT_EQ(-1, program[2]);
}

UTEST_MAIN();
