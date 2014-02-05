typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;

typedef struct
{
  uint16_t a;
  uint16_t b;
  uint16_t c;
} Sample;

void
test( uint32_t* values,
      Sample*   uniform,
      uint64_t  count )
{
  uint64_t i;

  for (i=0;i<count;i++)
  {
    values[i] += (uint32_t)uniform->b;
  }
}
