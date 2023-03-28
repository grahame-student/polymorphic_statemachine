#include <stdint.h>

#include "state_initialising.h"
#include "device_state_struct.h"
#include "state_factory.h"

static struct device_state_s backing_state;
static uint32_t init;

static void state_initialising_update(struct device_state_s *state);
static void state_initialising_apply_power(struct device_state_s *state);
static void state_initialising_shutdown(struct device_state_s *state);

struct device_state_s *state_initialising_new(void)
{
    return &backing_state;
}

void state_initialising_ctor(struct device_state_s *state)
{
    init = 5;
    state->next_state = state;
    state->update = state_initialising_update;
    state->apply_power = state_initialising_apply_power;
    state->shutdown = state_initialising_shutdown;
}

static void state_initialising_update(struct device_state_s *state)
{
    init--;
    if (init == 0)
    {
        state = get_state_running();
        (void)state;
    }
}

static void state_initialising_apply_power(struct device_state_s *state)
{
    (void)state;
}

static void state_initialising_shutdown(struct device_state_s *state)
{
    state = get_state_shutting_down();
    (void)state;
}
