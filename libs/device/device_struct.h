#ifndef DEVICE_STRUCT_H_
#define DEVICE_STRUCT_H_

#include "states/device_state_struct.h"

struct device_s
{
    struct device_state_s *state;
};

#endif /* DEVICE_STRUCT_H_ */
