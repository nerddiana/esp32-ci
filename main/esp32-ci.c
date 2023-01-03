#include "esp_ota_ops.h"
#include "esp-usb-config.h"

void app_main(void) {
  const esp_app_desc_t* app_description;
  app_description = esp_app_get_description();
  printf("Build version: %s\n", app_description->version);
  func();
}
