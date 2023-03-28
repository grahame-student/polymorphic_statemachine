#ifndef DEVICE_H_
#define DEVICE_H_

struct device_s *device_new(void);
void device_ctor(struct device_s *device);
void device_update(struct device_s *device);
void device_apply_power(struct device_s *device);
void device_shutdown(struct device_s *device);

#endif /* DEVICE_H_ */
