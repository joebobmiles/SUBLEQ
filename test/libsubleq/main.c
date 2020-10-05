#include "utest/utest.h"
#include "libsubleq.h"

// TODO

UTEST(subleq_execute, returns_status_normal_for_empty_program)
{
    ASSERT_EQ(
        SUBLEQ_STATUS_NORMAL,
        subleq_execute(NULL, 0, &(subleq_execute_options) {}));
}

UTEST_MAIN();
