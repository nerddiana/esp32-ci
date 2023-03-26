#include "esp_log.h"
#include "esp_ota_ops.h"
#include "esp_wifi_connect.h"

static const char* TAG = "ESP32_CI";

void app_main(void) {
  const esp_app_desc_t* app_description;
  app_description = esp_app_get_description();

  ESP_LOGI(TAG, "Build version: %s", app_description->version);

  esp_wifi_config_t esp_wifi_config = {
    .ssid = "my_ssid",
    .password = "my_password"
  };

  esp_wifi_netif_t esp_netif = {
    .ip = ""
  };

  esp_wifi_init(esp_wifi_config, esp_netif);
}
