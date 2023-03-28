#ifndef STATE_FACTORY_H_
#define STATE_FACTORY_H_

struct device_state_s *get_state_powered_down(void);
struct device_state_s *get_state_initialising(void);
struct device_state_s *get_state_running(void);
struct device_state_s *get_state_shutting_down(void);

#endif /* STATE_FACTORY_H_ */
