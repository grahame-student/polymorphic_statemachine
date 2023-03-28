#include "state_running.h"
#include "device_state_struct.h"
#include "state_factory.h"

static struct device_state_s backing_state;

static void state_running_update(struct device_state_s *state);
static void state_running_apply_power(struct device_state_s *state);
static void state_running_shutdown(struct device_state_s *state);

struct device_state_s *state_running_new(void)
{
    return &backing_state;
}

void state_running_ctor(struct device_state_s *state)
{
    state->next_state = state;
    state->update = state_running_update;
    state->apply_power = state_running_apply_power;
    state->shutdown = state_running_shutdown;
}

static void state_running_update(struct device_state_s *state)
{
    (void)state;
}

static void state_running_apply_power(struct device_state_s *state)
{
    (void)state;
}

static void state_running_shutdown(struct device_state_s *state)
{
    state = get_state_shutting_down();
    (void)state;
}
