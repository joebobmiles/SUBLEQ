#include "utest/utest.h"
#include "libsubleq.h"

// TODO

UTEST(subleq_execute, returns_status_normal_for_empty_program)
{
    int program[] = { 0 };

    ASSERT_EQ(
        SUBLEQ_STATUS_NORMAL,
        subleq_execute(program, 0, &(subleq_execute_options) {}));
}

UTEST(
    subleq_execute,
    returns_status_invalid_program_for_program_size_indivisible_by_three)
{
    int program[] = { 0 };

    ASSERT_EQ(
        SUBLEQ_STATUS_INVALID_PROGRAM,
        subleq_execute(program, 1, &(subleq_execute_options) {}));
}

UTEST(subleq_execute, returns_status_invalid_program_for_null_program_pointer)
{
    ASSERT_EQ(
        SUBLEQ_STATUS_INVALID_PROGRAM,
        subleq_execute(NULL, 3, &(subleq_execute_options) {}));
}

UTEST_MAIN();
