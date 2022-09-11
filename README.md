### **ESP Web Server**
Hosting a web site in the ESP8266 platform to control a GPIO pin output state

---
<br  />

**data>config.json**
1. The config.json file looks like this:
    ```
    {
        "deviceType" : "ESP01",
        "accessPoint" : [
                            {
                                "ssid": "WiFi1",
                                "password": "12345"
                            },
                            {
                                "ssid": "WiFi2",
                                "password": "12345"
                            },
                            {
                                "ssid": "WiFi3",
                                "password": "12345"
                            }
                        ]
    }
    ```

<br  />

---
<br  />

**Dependency Graph**

|-- ArduinoJson @ 6.19.4
<br  />
|-- TelnetStream @ 1.2.2
<br  />
|&nbsp; &nbsp; &nbsp;|-- ESP8266WiFi @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|-- Ethernet @ 2.0.0
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- SPI @ 1.0
<br  />
|-- Utility
<br  />
|&nbsp; &nbsp; &nbsp;|-- ArduinoJson @ 6.19.4
<br  />
|&nbsp; &nbsp; &nbsp;|-- ArduinoOTA @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- ESP8266WiFi @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- ESP8266mDNS @ 1.2
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- ESP8266WiFi @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|-- ESP8266WebServer @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- ESP8266WiFi @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|-- ESP8266WiFi @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|-- LittleFS @ 0.1.0
<br  />
|&nbsp; &nbsp; &nbsp;|-- TelnetStream @ 1.2.2
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- ESP8266WiFi @ 1.0
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- Ethernet @ 2.0.0
<br  />
|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|&nbsp; &nbsp; &nbsp;|-- SPI @ 1.0
<br  />

---
<br  />

**Web Site**
1. Landing Page

    ![github](https://raw.githubusercontent.com/lorenzmiranda05/EspWebServer/main/Assets/Image/Website/01LandingPage.png)

1. LED ON

    ![github](https://raw.githubusercontent.com/lorenzmiranda05/EspWebServer/main/Assets/Image/Website/02LedOn.png)

1. LED OFF

    ![github](https://raw.githubusercontent.com/lorenzmiranda05/EspWebServer/main/Assets/Image/Website/03LedOff.png)

1. Not Found

    ![github](https://raw.githubusercontent.com/lorenzmiranda05/EspWebServer/main/Assets/Image/Website/04NotFound.png)
<br  />

---
<br  />

**Reference**
1. [Build a Webserver on NodeMCU ESP8266 in Station Mode][BINARY UPDATES] of BINARY UPDATES YouTube channel
    * [Github Link][BINARY UPDATES GITHUB]

<br  />

---
<br  />

**Tasks**
* [x] Connect to WiFi using ESP8266WiFiMulti.h
* [x] Use WiFi credentials from File System
* [x] Update embedded program using ArduinoOTA.h
* [x] Print to serial and telnet streams
* [x] Control the output of GPIO 0 via a website hosted with ESP8266WebServer.h

<!-- Reusable and Invisible URL Definitions  -->
[Github Link]: https://github.com/lorenzmiranda05/Esp8266LiteTemplate

[BINARY UPDATES]: https://www.youtube.com/watch?v=pqaaPSRiYec

[BINARY UPDATES GITHUB]: https://github.com/binaryupdates/NodeMCU-Webserver-Station-Mode