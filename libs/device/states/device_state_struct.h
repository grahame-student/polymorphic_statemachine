#ifndef DEVICE_STATE_STRUCT_H_
#define DEVICE_STATE_STRUCT_H_

// Forward declare so that we can use the structure in the function pointers
// before we define the structure itself
struct device_state_s;

typedef void (*fptr_update)(struct device_state_s*);
typedef void (*fptr_apply_power)(struct device_state_s*);
typedef void (*fptr_shutdown)(struct device_state_s*);

struct device_state_s
{
    struct device_state_s *next_state;
    fptr_update update;
    fptr_apply_power apply_power;
    fptr_shutdown shutdown;
};

#endif /* DEVICE_STATE_STRUCT_H_ */
