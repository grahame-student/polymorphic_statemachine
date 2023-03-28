#include "state_factory.h"
#include "state_powered_down.h"
#include "state_initialising.h"
#include "state_running.h"
#include "state_shutting_down.h"

struct device_state_s *get_state_powered_down(void)
{
    struct device_state_s* state = state_powered_down_new();
    state_powered_down_ctor(state);
    return state;
}

struct device_state_s *get_state_initialising(void)
{
    struct device_state_s* state = state_initialising_new();
    state_initialising_ctor(state);
    return state;
}

struct device_state_s *get_state_running(void)
{
    struct device_state_s* state = state_running_new();
    state_running_ctor(state);
    return state;
}

struct device_state_s *get_state_shutting_down(void)
{
    struct device_state_s* state = state_shutting_down_new();
    state_shutting_down_ctor(state);
    return state;
}
