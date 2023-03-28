#include "state_powered_down.h"
#include "device_state_struct.h"
#include "state_factory.h"

static struct device_state_s backing_state;

static void state_powered_down_update(struct device_state_s *state);
static void state_powered_down_apply_power(struct device_state_s *state);
static void state_powered_down_shutdown(struct device_state_s *state);

struct device_state_s *state_powered_down_new(void)
{
    return &backing_state;
}

void state_powered_down_ctor(struct device_state_s *state)
{
    state->next_state = state;
    state->update = state_powered_down_update;
    state->apply_power = state_powered_down_apply_power;
    state->shutdown = state_powered_down_shutdown;
}

static void state_powered_down_update(struct device_state_s *state)
{
    (void)state;
}

static void state_powered_down_apply_power(struct device_state_s *state)
{
    state = get_state_initialising();
    (void)state;
}

static void state_powered_down_shutdown(struct device_state_s *state)
{
    (void)state;
}
