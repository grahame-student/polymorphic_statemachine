#include <stddef.h>

#include "device.h"
#include "device_struct.h"
#include "states/state_factory.h"

// Static instance removes need for dynamic memory allocation
static struct device_s backing_device;

struct device_s *device_new(void)
{
    return &backing_device;
}

void device_ctor(struct device_s *device)
{
    // Set initial state
    device->state = get_state_powered_down();
}

void device_update(struct device_s *device)
{
    device->state->update(device->state);
}

void device_apply_power(struct device_s *device)
{
    device->state->apply_power(device->state);

}

void device_shutdown(struct device_s *device)
{
    device->state->shutdown(device->state);
}
