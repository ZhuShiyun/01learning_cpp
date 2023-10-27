#include <omp.h>
#pragma omp parallel for
for (size_t i = 0; i < n; i++)
{
//#pragma omp parallel for
for (size_t j = 0; j < n; j++)
{
//...
}
}