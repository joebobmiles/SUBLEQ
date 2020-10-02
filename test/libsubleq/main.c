#include "utest/utest.h"
#include "libsubleq.h"

UTEST(config, returns_status_normal)
{
    double program[] = { 0, 0, -1 };
    ASSERT_EQ(STATUS_NORMAL, subleq_execute(program, sizeof(program)));
}

UTEST_MAIN();
