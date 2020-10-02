#ifndef __LIB_SUBLEQ_H__
#define __LIB_SUBLEQ_H__

// TODO: Define size_t

typedef enum subleq_status_e
{
	STATUS_NORMAL,
} subleq_status;

subleq_status
subleq_execute(double* program, size_t program_size)
{
	return STATUS_NORMAL;
}

#endif
