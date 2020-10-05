#ifndef __LIB_SUBLEQ_H__
#define __LIB_SUBLEQ_H__

// TODO: Define size_t

typedef enum subleq_status_e
{
    #define SUBLEQ_STATUS_CODES \
        _(NORMAL), \
        _(INVALID_PROGRAM)

    #define _(X) SUBLEQ_STATUS_ ## X
    SUBLEQ_STATUS_CODES
    #undef _
} subleq_status;

typedef struct subleq_execute_options_s
{
    unsigned int max_cycles;
} subleq_execute_options;

subleq_status
subleq_execute(
    int* program,
    size_t program_size,
    subleq_execute_options* options)
{
    if (program_size % 3 != 0 || program == NULL)
        return SUBLEQ_STATUS_INVALID_PROGRAM;

    return SUBLEQ_STATUS_NORMAL;
}

#endif
